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

/* Guides and materials
 * https://forbot.pl/blog/opencv-2-wykrywanie-obiektow-id4888
 * https://stackoverrun.com/pl/q/4834948
 * http://analizaobrazu.x25.pl/articles/34#F3
 * http://analizaobrazu.x25.pl/articles/26
 * http://www.focus.agh.edu.pl/theses/MGR12WazydragSzachy.pdf
 * http://analizaobrazu.x25.pl/
 * https://pbc.gda.pl/Content/51873/phd_dalka_piotr.pdf
 * https://app.assembla.com/wiki/show/wswiz/5_Detekcja_okr%C4%99g%C3%B3w
 * http://www.ibib.waw.pl/images/ibib/grupy/Postepowania-hablilitacyjne/dokumenty/Autoreferat_Korzynska.pdf
 * https://pl.wikisource.org/wiki/Dekameron/Prolog
 */

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
            p("isOpened");
            if(w.bPlay)
                w.grabFrame();
            if(w.matVideoFrame.empty()) {
                p("problem");
                p(w.getVideoFileName());
                w.vcVideo.release();
               if(w.source() == MainWindow::VIDEOFILE) {
                   w.vcVideo.open(w.getVideoFileName().toStdString());
               } else if(w.source() == MainWindow::VIDEOCAM) {
                   w.vcVideo.open(w.getCamId());
               }
               w.grabFrame();
            }
            img_hough = w.matVideoFrame.clone();

            Mat binary_edges;
            Canny(w.matVideoFrame, binary_edges, w.getThreasholdMin(), w.getThreasholdMax());
            blur(binary_edges,binary_edges,Size(1,1),Point(-1,-1),BORDER_DEFAULT);
//            Smooth(binary_edges, binary_edges, CV_GAUSSIAN, 7, 7);
//            imshow("binary_edges",binary_edges);
            /* ---------------------------------- Lines detection */
//            vector<Vec2f> hough_lines;
//            p("1");
//            HoughLines(binary_edges, hough_lines, 1, M_PI / 200.0, 150);
//            p("2");
//            for (size_t i = 0; i < hough_lines.size(); i++){
//                p("2");
//                float rho = hough_lines[i][0], theta = hough_lines[i][1];
//                Point pt1, pt2;
//                double a = cos(theta), b = sin(theta);
//                double x0 = a*rho, y0 = b*rho;
//                pt1.x = cvRound(x0 + 1000 * (-b));
//                pt1.y = cvRound(y0 + 1000 * (a));
//                pt2.x = cvRound(x0 - 1000 * (-b));
//                pt2.y = cvRound(y0 - 1000 * (a));
//                p("3");
//                line(img_hough, pt1, pt2, Scalar(0, 0, 255), 1, CV_AA);
//            }
            /* ---------------------------------- Circles detection */
             p("DP" << w.getDP());
             p("getMinDist" << w.getMinDist());
             p("getParam1" << w.getParam1());
             p("getParam2" << w.getParam2());
             p("getMinRadius" << w.getMinRadius());
             p("getMaxRadius" << w.getMaxRadius());
            vector<Vec3f> circles;
            HoughCircles(binary_edges, circles, CV_HOUGH_GRADIENT, w.getDP(), w.getMinDist(), w.getParam1(), w.getParam2(), w.getMinRadius(), w.getMaxRadius());

            for (size_t i = 0; i < circles.size(); i++){
                Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
                int radius = cvRound(circles[i][2]);
                p("radius" << radius);
                // draw the circle center
                circle(w.matVideoFrame, center, 1, Scalar(0, 255, 0), -1, 8, 0);
                // draw the circle outline
                circle(w.matVideoFrame, center, radius, Scalar(0, 0, 255), 3, 8, 0);
            }
//            imshow("Binary edges", img_hough);
            w.setVideoFrame();
            cvtColor(binary_edges,binary_edges,CV_GRAY2BGR);
            w.setBWFrame(binary_edges);
        }

    }
    //    return a.exec();
}
