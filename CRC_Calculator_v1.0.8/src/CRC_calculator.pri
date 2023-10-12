SOURCES += \
    $$PWD/ohms_law.cpp \
    src/CRC_Software_calculation.cpp \
    src/about.cpp \
    src/calc_line_2_points.cpp \
    src/curves_for_pwm.cpp \
    src/hex_to_float_double.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/pwm_hz.cpp \
    src/rtd_calculator_resistance_to_temperature.cpp \
    src/signal_converter.cpp \
    src/thermocouple_calculator.cpp

HEADERS += \
    $$PWD/ohms_law.h \
    src/CRC_Software_calculation.h \
    src/about.h \
    src/calc_line_2_points.h \
    src/curves_for_pwm.h \
    src/hex_to_float_double.h \
    src/mainwindow.h \
    src/pwm_hz.h \
    src/rtd_calculator_resistance_to_temperature.h \
    src/signal_converter.h \
    src/thermocouple_calculator.h

FORMS += \
    $$PWD/ohms_law.ui \
    src/about.ui \
    src/calc_line_2_points.ui \
    src/curves_for_pwm.ui \
    src/hex_to_float_double.ui \
    src/mainwindow.ui \
    src/pwm_hz.ui \
    src/rtd_calculator_resistance_to_temperature.ui \
    src/signal_converter.ui \
    src/thermocouple_calculator.ui

RESOURCES += \
    resources/images.qrc
