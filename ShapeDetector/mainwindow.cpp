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

using namespace std;
using namespace cv;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->gvFrame->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->gvFrame->setScene(new QGraphicsScene(this));
    ui->gvFrame->scene()->addItem(&pixmapItem);

    //    faceDetector = ObjectDetector("haarcascade_frontalface_alt2.xml");
    //    faceDetector.setName("morda");
    //    eyeDetector = ObjectDetector("haarcascade_eye_tree_eyeglasses.xml");
    //    eyeDetector.setName("oczko");
    //    eyeDetector = ObjectDetector("haarcascade_eye_tree_eyeglasses.xml");
    //    eyeDetector.setName("samolocik");
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
        source = VIDEOFILE;
        vcVideo >> matTestFrame;
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
                ui->btnPlay->setText("Close");
            }
        }
    } else {
        ui->btnPlay->setText("Open");
        vcVideo.release();
    }
}
