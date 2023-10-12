TEMPLATE = app
TARGET   = CRC_calculator
QT       += core gui widgets
CONFIG   += c++11

include(src/CRC_calculator.pri)

win32:RC_FILE = src/CRC_calculator_resource.rc

isEmpty(PREFIX) {
    # win32:PREFIX = "C:/out"
    unix:PREFIX = /usr/local
}

else: unix:!android: target.path = $${PREFIX}/bin
!isEmpty(target.path): INSTALLS += target
