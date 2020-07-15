#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileInfo>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>

#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

#include <opencv2/highgui.hpp>
#include <opencv2/calib3d.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/videostab.hpp>

#define max(x,y) x>y? x:y

using namespace std;
using namespace cv;


//int max(int x,int y) {return x>y? x:y;}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      iThreasholdMin(50),
    iThreasholdMax(150),
    iDP(2),
    iMinDist(100),
    iParam1(30),
    iParam2(150),
    iMinRadius(100),
    iMaxRadius(140),
    bPlay(false),
                    bCanny(false),
                    bBlur(false),
                    bThreashold(false),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   setWindowTitle(QString("Zajebisty program! -> release: ") + QString(__DATE__)+ " at " +QString(__TIME__) );

   ui->gvFrame->setStyleSheet("background-color: rgb(0, 0, 0);");
   ui->gvFrame->setScene(new QGraphicsScene(this));
   ui->gvFrame->scene()->addItem(&pixmapItem);
   ui->gvBWFrame->setStyleSheet("background-color: rgb(0, 0, 0);");
   ui->gvBWFrame->setScene(new QGraphicsScene(this));
   ui->gvBWFrame->scene()->addItem(&pixmapItemBW);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setVideoFrame(/*Mat*  video_frame*/)
{
    Mat *frame = &matVideoFrame;

    if(!frame->empty())
    {
        QImage qimg(frame->data,
                    frame->cols,
                    frame->rows,
                    frame->step,
                    QImage::Format_RGB888);
        ui->gvFrame->resetMatrix();
        pixmapItem.setPixmap(QPixmap::fromImage(qimg.rgbSwapped()));
        ui->gvFrame->fitInView(&pixmapItem, Qt::KeepAspectRatio);
    } else {
        qDebug() << "Frame is empty";
    }
}

void MainWindow::setBWFrame(Mat & video_frame)
{
    Mat frame = video_frame;

    if(!frame.empty())
    {
        QImage qimg(frame.data,
                    frame.cols,
                    frame.rows,
                    frame.step,
                    QImage::Format_RGB888);
        ui->gvBWFrame->resetMatrix();
        pixmapItemBW.setPixmap(QPixmap::fromImage(qimg.rgbSwapped()));
        ui->gvBWFrame->fitInView(&pixmapItemBW, Qt::KeepAspectRatio);
    } else {
        qDebug() << "Frame is empty";
    }
}

void MainWindow::on_btnOpenVideoFile_clicked()
{
    QString strFileName = QFileDialog::getOpenFileName(this,
                                                       tr("Open Video"), "f:/Video", tr("Video Files (*.mp4 *.avi *.mpeg *.webm)"));
    Mat matTestFrame;
    if(strFileName.isEmpty()) {
        qDebug() << "Empty";
        return;
    }

    if(strFileName.isNull()) {
        qDebug() << "Null";
        return;
    }

    strVideoFileName = strFileName;
    QFileInfo file_info(strFileName);

    qDebug() << "Open " << file_info.baseName();

    vcVideo.open(strVideoFileName.toStdString());
    if(vcVideo.isOpened()) {
        ui->lblVideoFileName->setText(file_info.filePath());
        ui->lblVideoFileName->setTextInteractionFlags(Qt::TextSelectableByMouse);
        ui->lblVideoFileName->setToolTip(file_info.path());
        ui->rbVideoFile->setChecked(true);
        ui->rbVideoFile->setStyleSheet("color:red");
        ui->rbVideoCam->setStyleSheet("color:black");
        ui->btnPlay->setText("Stop");
        m_source = VIDEOFILE;
        vcVideo >> matTestFrame;
        ui->hsParam1->setMaximum(max((int)matTestFrame.cols,(int)matTestFrame.rows));
        ui->hsParam2->setMaximum(max((int)matTestFrame.cols,(int)matTestFrame.rows));
        ui->hsMaxRadius->setMaximum(max((int)matTestFrame.cols,(int)matTestFrame.rows));
        ui->hsMinRadius->setMaximum(max((int)matTestFrame.cols,(int)matTestFrame.rows));
        ui->lblVideoFileDimension->setText(QString::number(matTestFrame.cols) + " x " + QString::number(matTestFrame.rows));
        ui->gvFrame->resetMatrix();
    } else {
        QMessageBox::warning(this, tr("Source Error !"),
                             tr("Can't open video source."),
                             QMessageBox::Ok);
    }

}

void MainWindow::drawObjects(Mat matFrame)
{
    for(size_t i=0;i < vObjects.size();i++)
    {
        rectangle(matFrame,vObjects[i].tl(),vObjects[i].br(),Scalar(0,255,255),2,LINE_8,0);
        putText(matFrame,strName.toStdString(),vObjects[i].tl(),FONT_HERSHEY_COMPLEX_SMALL,3,Scalar(0,255,255),1,LINE_8,false);
    }

}

void MainWindow::on_btnPlay_clicked()
{
    if(bPlay)
        bPlay = false;
    else
        bPlay = true;
    qDebug() << bPlay;
    if(true == bPlay) {
        if(ui->rbVideoCam->isChecked()) {
            if(vcVideo.isOpened())
                vcVideo.release();
            vcVideo.open(ui->cbxCamId->currentText().toInt());

            if(!vcVideo.isOpened()) {
                QMessageBox::warning(this, tr("Source Error !"),
                                     tr("Can't open video source."),
                                     QMessageBox::Ok);
                ui->rbVideoFile->setStyleSheet("color: black");
                ui->rbVideoCam->setStyleSheet("color: black");
            } else {
                ui->rbVideoFile->setStyleSheet("color: black");
                ui->rbVideoCam->setStyleSheet("color: red");
                ui->btnPlay->setText("Close");
            }
        } else if(ui->rbVideoFile->isChecked()) {
            if(vcVideo.isOpened())
                vcVideo.release();
            if(strVideoFileName.isEmpty()) {
                QMessageBox::warning(this, tr("Source Error !"),
                                     tr("Video source file empty."),
                                     QMessageBox::Ok);
            } else vcVideo.open(strVideoFileName.toStdString());

            if(!vcVideo.isOpened()) {
                QMessageBox::warning(this, tr("Source Error !"),
                                     tr("Can't open video source."),
                                     QMessageBox::Ok);
                ui->rbVideoFile->setStyleSheet("color: black");
                ui->rbVideoCam->setStyleSheet("color: black");
            } else {
                ui->rbVideoFile->setStyleSheet("color: red");
                ui->rbVideoCam->setStyleSheet("color: black");
                ui->btnPlay->setText("Stop");
            }
        }
    } else {
        ui->btnPlay->setText("Open");
        vcVideo.release();
    }
}


void MainWindow::on_hsDP_valueChanged(int value)
{
    iDP = value;
    ui->lblDP->setText(QString::number(value));
}

void MainWindow::on_hsMinDist_valueChanged(int value)
{
    iMinDist = value;
    ui->lblMinDist->setText(QString::number(value));
}

void MainWindow::on_hsParam1_valueChanged(int value)
{
    iParam1 = value;
    ui->lblParam1->setText(QString::number(value));
}

void MainWindow::on_hsParam2_valueChanged(int value)
{
    iParam2 = value;
    ui->lblParam2->setText(QString::number(value));
}

void MainWindow::on_hsThreasholdMin_valueChanged(int value)
{
    iThreasholdMin = value;
    ui->lblThreasholdMin->setText(QString::number(value));
}

void MainWindow::on_hsThreasholdMax_valueChanged(int value)
{
    iThreasholdMax = value;
    ui->lblThreasholdMax->setText(QString::number(value));
}

void MainWindow::on_hsMinRadius_valueChanged(int value)
{
    iMinRadius = value;
    ui->lblMinRadius->setText(QString::number(value));
}

void MainWindow::on_hsMaxRadius_valueChanged(int value)
{
    iMaxRadius = value;
    ui->lblMaxRadius->setText(QString::number(value));
}

void MainWindow::on_cbxCamId_activated(const QString &arg1)
{
    iCamId = ui->cbxCamId->currentText().toInt();
}

void MainWindow::on_chbThreashold_clicked(bool checked)
{
    bThreashold = checked;
}

void MainWindow::on_chbCanny_clicked(bool checked)
{
    bCanny = checked;
}


void MainWindow::on_checkBox_2_clicked(bool checked)
{
    bBlur = checked;
}
