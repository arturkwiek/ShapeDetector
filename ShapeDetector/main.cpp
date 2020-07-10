#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Mat tmp;
    while(1) {
        a.processEvents();
        if(w.vcVideo.isOpened()) {
            if(w.bPlay)
                w.grabFrame();

            cvtColor(w.matVideoFrame,tmp,COLOR_BGR2GRAY);
            threshold(tmp,tmp,128,255,CV_THRESH_BINARY);
            imshow("gray", tmp);

            CvSeq* contours;  //hold the pointer to a contour in the memory
            CvSeq* result; //hold sequence of points of a contour
            CvMemStorage *storage = cvCreateMemStorage(0); //storage area for all contours
            //finding all contours in the image
            findContours(tmp.clone(), contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE);

                        src.copyTo(dst);
//            if(w.faceDetector.isActive()) {
//                w.faceDetector.findObjects(w.matFrame);
//                w.faceDetector.drawObjects(w.matFrame);
//            }

//            if(w.eyeDetector.isActive()) {
//                w.eyeDetector.findObjects(w.matFrame);
//                w.eyeDetector.drawObjects(w.matFrame);
//            }

            w.setVideoFrame();
        }
        //        else qDebug() << "VideoCapture is close";
    }
//    return a.exec();
}
