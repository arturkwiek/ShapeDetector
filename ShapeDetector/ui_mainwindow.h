/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *gbxVideoFile;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblVideoFileName;
    QHBoxLayout *horizontalLayout;
    QLabel *lblVideoFileDimension;
    QPushButton *btnOpenVideoFile;
    QGroupBox *gbxVideoCam;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblVideoCamName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblVideoCamDimension;
    QComboBox *cbxCamId;
    QGroupBox *groupBox_3;
    QGraphicsView *gvFrame;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbVideoFile;
    QRadioButton *rbVideoCam;
    QPushButton *btnPlay;
    QGroupBox *groupBox_4;
    QSplitter *splitter;
    QWidget *layoutWidget3;
    QHBoxLayout *hlDP;
    QLabel *label_4;
    QSlider *hsDP;
    QLabel *lblDP;
    QWidget *layoutWidget_2;
    QHBoxLayout *hlMinDist;
    QLabel *label_3;
    QSlider *hsMinDist;
    QLabel *lblMinDist;
    QWidget *layoutWidget_3;
    QHBoxLayout *hlParam1;
    QLabel *label_6;
    QSlider *hsParam1;
    QLabel *lblParam1;
    QWidget *layoutWidget_4;
    QHBoxLayout *hlParam2;
    QLabel *label_5;
    QSlider *hsParam2;
    QLabel *lblParam2;
    QWidget *layoutWidget_7;
    QHBoxLayout *hlMinRasdius;
    QLabel *label_7;
    QSlider *hsMinRadius;
    QLabel *lblMinRadius;
    QWidget *layoutWidget_8;
    QHBoxLayout *hlMaxRadius;
    QLabel *label_8;
    QSlider *hsMaxRadius;
    QLabel *lblMaxRadius;
    QGroupBox *gbCanny;
    QWidget *layoutWidget_5;
    QHBoxLayout *hlMin;
    QLabel *label;
    QSlider *hsThreasholdMin;
    QLabel *lblThreasholdMin;
    QWidget *layoutWidget_6;
    QHBoxLayout *klMax;
    QLabel *label_2;
    QSlider *hsThreasholdMax;
    QLabel *lblThreasholdMax;
    QGroupBox *groupBox;
    QGraphicsView *gvBWFrame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(797, 563);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gbxVideoFile = new QGroupBox(centralwidget);
        gbxVideoFile->setObjectName(QString::fromUtf8("gbxVideoFile"));
        gbxVideoFile->setGeometry(QRect(20, 150, 390, 80));
        layoutWidget = new QWidget(gbxVideoFile);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 371, 46));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblVideoFileName = new QLabel(layoutWidget);
        lblVideoFileName->setObjectName(QString::fromUtf8("lblVideoFileName"));

        verticalLayout->addWidget(lblVideoFileName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblVideoFileDimension = new QLabel(layoutWidget);
        lblVideoFileDimension->setObjectName(QString::fromUtf8("lblVideoFileDimension"));

        horizontalLayout->addWidget(lblVideoFileDimension);

        btnOpenVideoFile = new QPushButton(layoutWidget);
        btnOpenVideoFile->setObjectName(QString::fromUtf8("btnOpenVideoFile"));
        btnOpenVideoFile->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btnOpenVideoFile);


        verticalLayout->addLayout(horizontalLayout);

        gbxVideoCam = new QGroupBox(centralwidget);
        gbxVideoCam->setObjectName(QString::fromUtf8("gbxVideoCam"));
        gbxVideoCam->setGeometry(QRect(20, 60, 390, 80));
        layoutWidget1 = new QWidget(gbxVideoCam);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 371, 44));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblVideoCamName = new QLabel(layoutWidget1);
        lblVideoCamName->setObjectName(QString::fromUtf8("lblVideoCamName"));

        verticalLayout_2->addWidget(lblVideoCamName);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblVideoCamDimension = new QLabel(layoutWidget1);
        lblVideoCamDimension->setObjectName(QString::fromUtf8("lblVideoCamDimension"));

        horizontalLayout_3->addWidget(lblVideoCamDimension);

        cbxCamId = new QComboBox(layoutWidget1);
        cbxCamId->addItem(QString());
        cbxCamId->addItem(QString());
        cbxCamId->setObjectName(QString::fromUtf8("cbxCamId"));
        cbxCamId->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(cbxCamId);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 240, 390, 270));
        gvFrame = new QGraphicsView(groupBox_3);
        gvFrame->setObjectName(QString::fromUtf8("gvFrame"));
        gvFrame->setGeometry(QRect(20, 20, 350, 230));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 20, 188, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rbVideoFile = new QRadioButton(layoutWidget2);
        rbVideoFile->setObjectName(QString::fromUtf8("rbVideoFile"));

        horizontalLayout_2->addWidget(rbVideoFile);

        rbVideoCam = new QRadioButton(layoutWidget2);
        rbVideoCam->setObjectName(QString::fromUtf8("rbVideoCam"));

        horizontalLayout_2->addWidget(rbVideoCam);

        btnPlay = new QPushButton(layoutWidget2);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));

        horizontalLayout_2->addWidget(btnPlay);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(430, 10, 350, 191));
        splitter = new QSplitter(groupBox_4);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(20, 30, 311, 96));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        hlDP = new QHBoxLayout(layoutWidget3);
        hlDP->setObjectName(QString::fromUtf8("hlDP"));
        hlDP->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setMaximumSize(QSize(16777215, 16777215));

        hlDP->addWidget(label_4);

        hsDP = new QSlider(layoutWidget3);
        hsDP->setObjectName(QString::fromUtf8("hsDP"));
        hsDP->setMinimum(1);
        hsDP->setMaximum(2);
        hsDP->setPageStep(1);
        hsDP->setValue(2);
        hsDP->setOrientation(Qt::Horizontal);

        hlDP->addWidget(hsDP);

        lblDP = new QLabel(layoutWidget3);
        lblDP->setObjectName(QString::fromUtf8("lblDP"));
        lblDP->setMinimumSize(QSize(20, 0));
        QFont font;
        font.setPointSize(12);
        lblDP->setFont(font);
        lblDP->setAlignment(Qt::AlignCenter);

        hlDP->addWidget(lblDP);

        splitter->addWidget(layoutWidget3);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        hlMinDist = new QHBoxLayout(layoutWidget_2);
        hlMinDist->setObjectName(QString::fromUtf8("hlMinDist"));
        hlMinDist->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(16777215, 16777215));

        hlMinDist->addWidget(label_3);

        hsMinDist = new QSlider(layoutWidget_2);
        hsMinDist->setObjectName(QString::fromUtf8("hsMinDist"));
        hsMinDist->setMinimum(50);
        hsMinDist->setMaximum(150);
        hsMinDist->setValue(100);
        hsMinDist->setOrientation(Qt::Horizontal);

        hlMinDist->addWidget(hsMinDist);

        lblMinDist = new QLabel(layoutWidget_2);
        lblMinDist->setObjectName(QString::fromUtf8("lblMinDist"));
        lblMinDist->setMinimumSize(QSize(20, 0));
        lblMinDist->setFont(font);
        lblMinDist->setAlignment(Qt::AlignCenter);

        hlMinDist->addWidget(lblMinDist);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        hlParam1 = new QHBoxLayout(layoutWidget_3);
        hlParam1->setObjectName(QString::fromUtf8("hlParam1"));
        hlParam1->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setMaximumSize(QSize(16777215, 16777215));

        hlParam1->addWidget(label_6);

        hsParam1 = new QSlider(layoutWidget_3);
        hsParam1->setObjectName(QString::fromUtf8("hsParam1"));
        hsParam1->setValue(30);
        hsParam1->setOrientation(Qt::Horizontal);

        hlParam1->addWidget(hsParam1);

        lblParam1 = new QLabel(layoutWidget_3);
        lblParam1->setObjectName(QString::fromUtf8("lblParam1"));
        lblParam1->setMinimumSize(QSize(20, 0));
        lblParam1->setFont(font);
        lblParam1->setAlignment(Qt::AlignCenter);

        hlParam1->addWidget(lblParam1);

        splitter->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(splitter);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        hlParam2 = new QHBoxLayout(layoutWidget_4);
        hlParam2->setObjectName(QString::fromUtf8("hlParam2"));
        hlParam2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setMaximumSize(QSize(16777215, 16777215));

        hlParam2->addWidget(label_5);

        hsParam2 = new QSlider(layoutWidget_4);
        hsParam2->setObjectName(QString::fromUtf8("hsParam2"));
        hsParam2->setMinimum(50);
        hsParam2->setMaximum(200);
        hsParam2->setValue(150);
        hsParam2->setOrientation(Qt::Horizontal);

        hlParam2->addWidget(hsParam2);

        lblParam2 = new QLabel(layoutWidget_4);
        lblParam2->setObjectName(QString::fromUtf8("lblParam2"));
        lblParam2->setMinimumSize(QSize(20, 0));
        lblParam2->setFont(font);
        lblParam2->setAlignment(Qt::AlignCenter);

        hlParam2->addWidget(lblParam2);

        splitter->addWidget(layoutWidget_4);
        layoutWidget_7 = new QWidget(groupBox_4);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(20, 130, 311, 21));
        hlMinRasdius = new QHBoxLayout(layoutWidget_7);
        hlMinRasdius->setObjectName(QString::fromUtf8("hlMinRasdius"));
        hlMinRasdius->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(80, 0));
        label_7->setMaximumSize(QSize(16777215, 16777215));

        hlMinRasdius->addWidget(label_7);

        hsMinRadius = new QSlider(layoutWidget_7);
        hsMinRadius->setObjectName(QString::fromUtf8("hsMinRadius"));
        hsMinRadius->setMaximum(200);
        hsMinRadius->setValue(100);
        hsMinRadius->setOrientation(Qt::Horizontal);

        hlMinRasdius->addWidget(hsMinRadius);

        lblMinRadius = new QLabel(layoutWidget_7);
        lblMinRadius->setObjectName(QString::fromUtf8("lblMinRadius"));
        lblMinRadius->setMinimumSize(QSize(20, 0));
        lblMinRadius->setFont(font);
        lblMinRadius->setAlignment(Qt::AlignCenter);

        hlMinRasdius->addWidget(lblMinRadius);

        layoutWidget_8 = new QWidget(groupBox_4);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(20, 160, 311, 21));
        hlMaxRadius = new QHBoxLayout(layoutWidget_8);
        hlMaxRadius->setObjectName(QString::fromUtf8("hlMaxRadius"));
        hlMaxRadius->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(80, 0));
        label_8->setMaximumSize(QSize(16777215, 16777215));

        hlMaxRadius->addWidget(label_8);

        hsMaxRadius = new QSlider(layoutWidget_8);
        hsMaxRadius->setObjectName(QString::fromUtf8("hsMaxRadius"));
        hsMaxRadius->setMaximum(200);
        hsMaxRadius->setValue(140);
        hsMaxRadius->setOrientation(Qt::Horizontal);

        hlMaxRadius->addWidget(hsMaxRadius);

        lblMaxRadius = new QLabel(layoutWidget_8);
        lblMaxRadius->setObjectName(QString::fromUtf8("lblMaxRadius"));
        lblMaxRadius->setMinimumSize(QSize(20, 0));
        lblMaxRadius->setFont(font);
        lblMaxRadius->setAlignment(Qt::AlignCenter);

        hlMaxRadius->addWidget(lblMaxRadius);

        gbCanny = new QGroupBox(centralwidget);
        gbCanny->setObjectName(QString::fromUtf8("gbCanny"));
        gbCanny->setGeometry(QRect(430, 210, 350, 100));
        layoutWidget_5 = new QWidget(gbCanny);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 30, 310, 21));
        hlMin = new QHBoxLayout(layoutWidget_5);
        hlMin->setObjectName(QString::fromUtf8("hlMin"));
        hlMin->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(16777215, 16777215));

        hlMin->addWidget(label);

        hsThreasholdMin = new QSlider(layoutWidget_5);
        hsThreasholdMin->setObjectName(QString::fromUtf8("hsThreasholdMin"));
        hsThreasholdMin->setMaximum(255);
        hsThreasholdMin->setOrientation(Qt::Horizontal);

        hlMin->addWidget(hsThreasholdMin);

        lblThreasholdMin = new QLabel(layoutWidget_5);
        lblThreasholdMin->setObjectName(QString::fromUtf8("lblThreasholdMin"));
        lblThreasholdMin->setMinimumSize(QSize(20, 0));
        lblThreasholdMin->setFont(font);
        lblThreasholdMin->setAlignment(Qt::AlignCenter);

        hlMin->addWidget(lblThreasholdMin);

        layoutWidget_6 = new QWidget(gbCanny);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(20, 60, 310, 21));
        klMax = new QHBoxLayout(layoutWidget_6);
        klMax->setObjectName(QString::fromUtf8("klMax"));
        klMax->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));

        klMax->addWidget(label_2);

        hsThreasholdMax = new QSlider(layoutWidget_6);
        hsThreasholdMax->setObjectName(QString::fromUtf8("hsThreasholdMax"));
        hsThreasholdMax->setMaximum(255);
        hsThreasholdMax->setOrientation(Qt::Horizontal);

        klMax->addWidget(hsThreasholdMax);

        lblThreasholdMax = new QLabel(layoutWidget_6);
        lblThreasholdMax->setObjectName(QString::fromUtf8("lblThreasholdMax"));
        lblThreasholdMax->setMinimumSize(QSize(20, 0));
        lblThreasholdMax->setFont(font);
        lblThreasholdMax->setAlignment(Qt::AlignCenter);

        klMax->addWidget(lblThreasholdMax);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(430, 320, 271, 191));
        gvBWFrame = new QGraphicsView(groupBox);
        gvBWFrame->setObjectName(QString::fromUtf8("gvBWFrame"));
        gvBWFrame->setGeometry(QRect(20, 20, 221, 161));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 797, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gbxVideoFile->setTitle(QCoreApplication::translate("MainWindow", "Video file", nullptr));
        lblVideoFileName->setText(QCoreApplication::translate("MainWindow", "FileName:", nullptr));
        lblVideoFileDimension->setText(QCoreApplication::translate("MainWindow", "Dimension:", nullptr));
        btnOpenVideoFile->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        gbxVideoCam->setTitle(QCoreApplication::translate("MainWindow", "Video Cam", nullptr));
        lblVideoCamName->setText(QCoreApplication::translate("MainWindow", "CamName", nullptr));
        lblVideoCamDimension->setText(QCoreApplication::translate("MainWindow", "Dimension:", nullptr));
        cbxCamId->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        cbxCamId->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Video Frames", nullptr));
        rbVideoFile->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
        rbVideoCam->setText(QCoreApplication::translate("MainWindow", "Camera", nullptr));
        btnPlay->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Paarams", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", " double dp:", nullptr));
        lblDP->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "double minDist:", nullptr));
        lblMinDist->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", " double param1:", nullptr));
        lblParam1->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "double param2:", nullptr));
        lblParam2->setText(QCoreApplication::translate("MainWindow", "150", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", " int minRadius:", nullptr));
        lblMinRadius->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "int maxRadius:", nullptr));
        lblMaxRadius->setText(QCoreApplication::translate("MainWindow", "140", nullptr));
        gbCanny->setTitle(QCoreApplication::translate("MainWindow", "Canny", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min:", nullptr));
        lblThreasholdMin->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max:", nullptr));
        lblThreasholdMax->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
