QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CRC_Software_calculation.cpp \
    about.cpp \
    calc_line_2_points.cpp \
    hex_to_float_double.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    CRC_Software_calculation.h \
    about.h \
    calc_line_2_points.h \
    hex_to_float_double.h \
    mainwindow.h

FORMS += \
    about.ui \
    calc_line_2_points.ui \
    hex_to_float_double.ui \
    mainwindow.ui

RC_ICONS = app1.ico


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
