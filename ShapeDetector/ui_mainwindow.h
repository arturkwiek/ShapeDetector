/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbVideoFile;
    QRadioButton *rbVideoCam;
    QPushButton *btnPlay;
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *hl1;
    QSlider *hs1;
    QLabel *lbl1;
    QWidget *layoutWidget_2;
    QHBoxLayout *hl2;
    QSlider *hs2;
    QLabel *lbl2;
    QWidget *layoutWidget_3;
    QHBoxLayout *hl3;
    QSlider *hs3;
    QLabel *lbl3;
    QWidget *layoutWidget_4;
    QHBoxLayout *hl4;
    QSlider *hs4;
    QLabel *lbl4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(797, 553);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 150, 390, 80));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 371, 46));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblVideoFileName = new QLabel(layoutWidget);
        lblVideoFileName->setObjectName(QStringLiteral("lblVideoFileName"));

        verticalLayout->addWidget(lblVideoFileName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblVideoFileDimension = new QLabel(layoutWidget);
        lblVideoFileDimension->setObjectName(QStringLiteral("lblVideoFileDimension"));

        horizontalLayout->addWidget(lblVideoFileDimension);

        btnOpenVideoFile = new QPushButton(layoutWidget);
        btnOpenVideoFile->setObjectName(QStringLiteral("btnOpenVideoFile"));
        btnOpenVideoFile->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btnOpenVideoFile);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 60, 390, 80));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 371, 44));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblVideoCamName = new QLabel(layoutWidget1);
        lblVideoCamName->setObjectName(QStringLiteral("lblVideoCamName"));

        verticalLayout_2->addWidget(lblVideoCamName);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lblVideoCamDimension = new QLabel(layoutWidget1);
        lblVideoCamDimension->setObjectName(QStringLiteral("lblVideoCamDimension"));

        horizontalLayout_3->addWidget(lblVideoCamDimension);

        cbxCamId = new QComboBox(layoutWidget1);
        cbxCamId->setObjectName(QStringLiteral("cbxCamId"));
        cbxCamId->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(cbxCamId);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 240, 390, 270));
        gvFrame = new QGraphicsView(groupBox_3);
        gvFrame->setObjectName(QStringLiteral("gvFrame"));
        gvFrame->setGeometry(QRect(20, 20, 350, 230));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 20, 188, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rbVideoFile = new QRadioButton(layoutWidget2);
        rbVideoFile->setObjectName(QStringLiteral("rbVideoFile"));

        horizontalLayout_2->addWidget(rbVideoFile);

        rbVideoCam = new QRadioButton(layoutWidget2);
        rbVideoCam->setObjectName(QStringLiteral("rbVideoCam"));

        horizontalLayout_2->addWidget(rbVideoCam);

        btnPlay = new QPushButton(layoutWidget2);
        btnPlay->setObjectName(QStringLiteral("btnPlay"));

        horizontalLayout_2->addWidget(btnPlay);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(490, 40, 280, 96));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        hl1 = new QHBoxLayout(widget);
        hl1->setObjectName(QStringLiteral("hl1"));
        hl1->setContentsMargins(0, 0, 0, 0);
        hs1 = new QSlider(widget);
        hs1->setObjectName(QStringLiteral("hs1"));
        hs1->setOrientation(Qt::Horizontal);

        hl1->addWidget(hs1);

        lbl1 = new QLabel(widget);
        lbl1->setObjectName(QStringLiteral("lbl1"));
        QFont font;
        font.setPointSize(12);
        lbl1->setFont(font);

        hl1->addWidget(lbl1);

        splitter->addWidget(widget);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        hl2 = new QHBoxLayout(layoutWidget_2);
        hl2->setObjectName(QStringLiteral("hl2"));
        hl2->setContentsMargins(0, 0, 0, 0);
        hs2 = new QSlider(layoutWidget_2);
        hs2->setObjectName(QStringLiteral("hs2"));
        hs2->setOrientation(Qt::Horizontal);

        hl2->addWidget(hs2);

        lbl2 = new QLabel(layoutWidget_2);
        lbl2->setObjectName(QStringLiteral("lbl2"));
        lbl2->setFont(font);

        hl2->addWidget(lbl2);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        hl3 = new QHBoxLayout(layoutWidget_3);
        hl3->setObjectName(QStringLiteral("hl3"));
        hl3->setContentsMargins(0, 0, 0, 0);
        hs3 = new QSlider(layoutWidget_3);
        hs3->setObjectName(QStringLiteral("hs3"));
        hs3->setOrientation(Qt::Horizontal);

        hl3->addWidget(hs3);

        lbl3 = new QLabel(layoutWidget_3);
        lbl3->setObjectName(QStringLiteral("lbl3"));
        lbl3->setFont(font);

        hl3->addWidget(lbl3);

        splitter->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(splitter);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        hl4 = new QHBoxLayout(layoutWidget_4);
        hl4->setObjectName(QStringLiteral("hl4"));
        hl4->setContentsMargins(0, 0, 0, 0);
        hs4 = new QSlider(layoutWidget_4);
        hs4->setObjectName(QStringLiteral("hs4"));
        hs4->setOrientation(Qt::Horizontal);

        hl4->addWidget(hs4);

        lbl4 = new QLabel(layoutWidget_4);
        lbl4->setObjectName(QStringLiteral("lbl4"));
        lbl4->setFont(font);

        hl4->addWidget(lbl4);

        splitter->addWidget(layoutWidget_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 797, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Video file", Q_NULLPTR));
        lblVideoFileName->setText(QApplication::translate("MainWindow", "FileName:", Q_NULLPTR));
        lblVideoFileDimension->setText(QApplication::translate("MainWindow", "Dimension:", Q_NULLPTR));
        btnOpenVideoFile->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Video Cam", Q_NULLPTR));
        lblVideoCamName->setText(QApplication::translate("MainWindow", "CamName", Q_NULLPTR));
        lblVideoCamDimension->setText(QApplication::translate("MainWindow", "Dimension:", Q_NULLPTR));
        cbxCamId->clear();
        cbxCamId->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
        );
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Video Frames", Q_NULLPTR));
        rbVideoFile->setText(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        rbVideoCam->setText(QApplication::translate("MainWindow", "Camera", Q_NULLPTR));
        btnPlay->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        lbl1->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lbl2->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lbl3->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lbl4->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
