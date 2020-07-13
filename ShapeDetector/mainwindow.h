#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
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

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    typedef   enum {
        VIDEOFILE,
        VIDEOCAM,
        NONE
    }en_source_type_t;


    void closeEvent(QCloseEvent* e) override {
        vcVideo.release();
//        QMessageBox::information(this, "", "Close event received.");
        QMainWindow::closeEvent(e);
        exit(0);
    }
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    VideoCapture vcVideo;
    bool bPlay;
    Mat matVideoFrame;

    void grabFrame() {vcVideo >> matVideoFrame;}
    void setVideoFrame();
    void drawObjects(Mat matFrame);
private:
    Ui::MainWindow *ui;

    QString strVideoFileName;
    QGraphicsPixmapItem pixmapItem;
    en_source_type_t source; //!< Source type: Camera / Video file
    vector <Rect> vObjects;
    QString strName;

public slots:
    void on_btnOpenVideoFile_clicked();
    void on_btnPlay_clicked();

private slots:
    void on_hs1_valueChanged(int value);
    void on_hs2_valueChanged(int value);
    void on_hs3_valueChanged(int value);
    void on_hs4_valueChanged(int value);
};
#endif // MAINWINDOW_H
