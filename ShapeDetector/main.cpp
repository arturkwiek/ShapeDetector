#include "mainwindow.h"

#include <QApplication>
#include <QDebug>

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

#define p(x) qDebug() << x

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Mat tmp;
    Mat img_hough;
    vector<Vec3f> circles;
    while(1) {
        a.processEvents();
        if(w.vcVideo.isOpened()) {
            if(w.bPlay)
                w.grabFrame();
            img_hough = w.matVideoFrame.clone();

            Mat binary_edges;
            Canny(w.matVideoFrame, binary_edges, 100, 200);

            /* ---------------------------------- Lines detection */
            /* vector<Vec2f> hough_lines;
            p("1");
            HoughLines(binary_edges, hough_lines, 1, M_PI / 200.0, 150);
            p("2");
            for (size_t i = 0; i < hough_lines.size(); i++){
                p("2");
                float rho = hough_lines[i][0], theta = hough_lines[i][1];
                Point pt1, pt2;
                double a = cos(theta), b = sin(theta);
                double x0 = a*rho, y0 = b*rho;
                pt1.x = cvRound(x0 + 1000 * (-b));
                pt1.y = cvRound(y0 + 1000 * (a));
                pt2.x = cvRound(x0 - 1000 * (-b));
                pt2.y = cvRound(y0 - 1000 * (a));
                p("3");
                line(img_hough, pt1, pt2, Scalar(0, 0, 255), 1, CV_AA);
                */
            /* ---------------------------------- Circles detection */
            vector<Vec3f> circles;
            HoughCircles(binary_edges, circles, CV_HOUGH_GRADIENT, 2, 20, 500, 20, 30, 33);

            for (size_t i = 0; i < circles.size(); i++){
                Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
                int radius = cvRound(circles[i][2]);
                p("radius" << radius);
                // draw the circle center
                circle(img_hough, center, 1, Scalar(0, 255, 0), -1, 8, 0);
                // draw the circle outline
                circle(img_hough, center, radius, Scalar(0, 0, 255), 1, 8, 0);
            }
            p("4");
            imshow("Binary edges", img_hough);
            p("5");
            w.setVideoFrame();
        }

    }
    //    return a.exec();
}
