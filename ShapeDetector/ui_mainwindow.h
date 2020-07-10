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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblVideoFileName;
    QHBoxLayout *horizontalLayout;
    QLabel *lblVideoFileDimension;
    QPushButton *btnOpenVideoFile;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblVideoCamName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblVideoCamDimension;
    QComboBox *cbxCamId;
    QGroupBox *groupBox_3;
    QGraphicsView *gvFrame;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbVideoFile;
    QRadioButton *rbVideoCam;
    QPushButton *btnPlay;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(430, 553);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 150, 390, 80));
        layoutWidget = new QWidget(groupBox);
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

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 60, 390, 80));
        layoutWidget1 = new QWidget(groupBox_2);
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
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 188, 25));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rbVideoFile = new QRadioButton(widget);
        rbVideoFile->setObjectName(QString::fromUtf8("rbVideoFile"));

        horizontalLayout_2->addWidget(rbVideoFile);

        rbVideoCam = new QRadioButton(widget);
        rbVideoCam->setObjectName(QString::fromUtf8("rbVideoCam"));

        horizontalLayout_2->addWidget(rbVideoCam);

        btnPlay = new QPushButton(widget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));

        horizontalLayout_2->addWidget(btnPlay);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 430, 21));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Video file", nullptr));
        lblVideoFileName->setText(QCoreApplication::translate("MainWindow", "FileName:", nullptr));
        lblVideoFileDimension->setText(QCoreApplication::translate("MainWindow", "Dimension:", nullptr));
        btnOpenVideoFile->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Video Cam", nullptr));
        lblVideoCamName->setText(QCoreApplication::translate("MainWindow", "CamName", nullptr));
        lblVideoCamDimension->setText(QCoreApplication::translate("MainWindow", "Dimension:", nullptr));
        cbxCamId->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        cbxCamId->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Video Frames", nullptr));
        rbVideoFile->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
        rbVideoCam->setText(QCoreApplication::translate("MainWindow", "Camera", nullptr));
        btnPlay->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
