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


    void closeEvent(QCloseEvent* e) override {
        vcVideo.release();
        //        QMessageBox::information(this, "", "Close event received.");
        QMainWindow::closeEvent(e);
        exit(0);
    }
public:

    typedef enum {
        VIDEOFILE,
        VIDEOCAM,
        NONE
    }en_source_type_t;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    VideoCapture vcVideo;
    bool bPlay;
    Mat matVideoFrame;

    void grabFrame() {vcVideo >> matVideoFrame;}
    void setVideoFrame();
    void setBWFrame(Mat & video_frame);
    void drawObjects(Mat matFrame);
    QString getVideoFileName() {return strVideoFileName;}
    //set params
    void setThreasholdMin(int value) {iThreasholdMin = value;}
    void setThreasholdMax(int value) {iThreasholdMax = value;}
    void setDP(int value) {iDP = value;}
    void setMinDist(int value) {iMinDist = value;}
    void setParam1(int value) {iParam1 = value;}
    void setParam2(int value) {iParam2 = value;}
    void setMinRadius(int value) {iMinRadius = value;}
    void setMaxRadius(int value) {iMaxRadius = value;}
    int getCamId() {return iCamId;}
    //get params
    int getThreasholdMin() {return iThreasholdMin;}
    int getThreasholdMax() {return iThreasholdMax;}
    int getDP() {return iDP;}
    int getMinDist() {return iMinDist;}
    int getParam1() {return iParam1;}
    int getParam2() {return iParam2;}
    int getMinRadius() {return iMinRadius;}
    int getMaxRadius() {return iMaxRadius;}
    en_source_type_t source() {return m_source;}
private:
    Ui::MainWindow *ui;

    QString strVideoFileName;
    QGraphicsPixmapItem pixmapItem;
    QGraphicsPixmapItem pixmapItemBW;
    en_source_type_t m_source; //!< Source type: Camera / Video file
    int iCamId; //!< Camera Id number - > for CaptureVideo open function
    vector <Rect> vObjects;
    QString strName;
    int iThreasholdMin,
    iThreasholdMax,
    iDP,
    iMinDist,
    iParam1,
    iParam2,
    iMinRadius,
    iMaxRadius;

public slots:
    void on_btnOpenVideoFile_clicked();
    void on_btnPlay_clicked();

private slots:
    void on_hsDP_valueChanged(int value);
    void on_hsMinDist_valueChanged(int value);
    void on_hsParam1_valueChanged(int value);
    void on_hsParam2_valueChanged(int value);

    void on_hsThreasholdMin_valueChanged(int value);
    void on_hsThreasholdMax_valueChanged(int value);
    void on_hsMinRadius_valueChanged(int value);
    void on_hsMaxRadius_valueChanged(int value);
    void on_cbxCamId_activated(const QString &arg1);
};
#endif // MAINWINDOW_H
