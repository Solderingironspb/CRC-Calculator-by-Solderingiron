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
    curves_for_pwm.cpp \
    hex_to_float_double.cpp \
    main.cpp \
    mainwindow.cpp \
    rtd_calculator_resistance_to_temperature.cpp \
    signal_converter.cpp \
    thermocouple_calculator.cpp

HEADERS += \
    CRC_Software_calculation.h \
    about.h \
    calc_line_2_points.h \
    curves_for_pwm.h \
    hex_to_float_double.h \
    mainwindow.h \
    rtd_calculator_resistance_to_temperature.h \
    signal_converter.h \
    thermocouple_calculator.h

FORMS += \
    about.ui \
    calc_line_2_points.ui \
    curves_for_pwm.ui \
    hex_to_float_double.ui \
    mainwindow.ui \
    rtd_calculator_resistance_to_temperature.ui \
    signal_converter.ui \
    thermocouple_calculator.ui

RC_ICONS = app1.ico


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
