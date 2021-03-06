QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

INCLUDEPATH += C:\opencv320\build\install\include
LIBS += -LC:\opencv320\build\install\x86\mingw\bin

LIBS += -lopencv_calib3d320
LIBS += -lopencv_core320
LIBS += -lopencv_features2d320
LIBS += -lopencv_flann320
LIBS += -lopencv_highgui320
LIBS += -lopencv_imgcodecs320
LIBS += -lopencv_imgproc320
LIBS += -lopencv_ml320
LIBS += -lopencv_objdetect320
LIBS += -lopencv_videoio320

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
