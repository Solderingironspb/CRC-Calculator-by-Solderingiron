#include "thermocouple_calculator.h"
#include "ui_thermocouple_calculator.h"
#include <QMessageBox>
#include <math.h>

/*Массивы для аппроксимирующих полиномов*/
double Array_coefficient_A[15] = { 0.0, };
double Array_coefficient_C[11] = { 0.0, };
bool flag_hardfault_state = false;
/*Массивы для аппроксимирующих полиномов*/

/*======================================ТЕРМОПАРЫ ТИПА R (ПЛАТИНА - 13% РОДИЙ / ПЛАТИНА)======================================*/

/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа R (платина — 13% родий / платина)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 61)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 5 Таблица 1)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_R(double Temperature) {
    double temf = 0.0;
    if (Temperature >= -50 && Temperature < 1064.18) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 5.28961729765e-3;
        Array_coefficient_A[2] = 1.39166589782e-5;
        Array_coefficient_A[3] = -2.38855693017e-8;
        Array_coefficient_A[4] = 3.56916001063e-11;
        Array_coefficient_A[5] = -4.62347666298e-14;
        Array_coefficient_A[6] = 5.00777441034e-17;
        Array_coefficient_A[7] = -3.73105886191e-20;
        Array_coefficient_A[8] = 1.57716482367e-23;
        Array_coefficient_A[9] = -2.81038625251e-27;
        for (uint8_t i = 0; i <= 9; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else if (Temperature >= 1064.18 && Temperature < 1664.5) {
        Array_coefficient_A[0] = 2.95157925316;
        Array_coefficient_A[1] = -2.52061251332e-3;
        Array_coefficient_A[2] = 1.59564501865e-5;
        Array_coefficient_A[3] = -7.64085947576e-9;
        Array_coefficient_A[4] = 2.05305291024e-12;
        Array_coefficient_A[5] = -2.93359668173e-16;
        for (uint8_t i = 0; i <= 5; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else if (Temperature >= 1664.5 && Temperature <= 1768.1) {
        Array_coefficient_A[0] = 1.52232118209e2;
        Array_coefficient_A[1] = -2.68819888545e-1;
        Array_coefficient_A[2] = 1.71280280471e-4;
        Array_coefficient_A[3] = -3.45895706453e-8;
        Array_coefficient_A[4] = -9.34633971046e-15;
        for (uint8_t i = 0; i <= 4; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа R (платина — 13% родий / платина)
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 67)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 5 Таблица 1)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_R(double TEMF) {
    double temperature = 0.0;
    //от минус 50 °С до 250 °С
    if (TEMF >= -0.225 && TEMF < 1.923) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 1.8891380e2;
        Array_coefficient_C[2] = -9.3835290e1;
        Array_coefficient_C[3] = 1.3068619e2;
        Array_coefficient_C[4] = -2.2703580e2;
        Array_coefficient_C[5] = 3.5145659e2;
        Array_coefficient_C[6] = -3.8953900e2;
        Array_coefficient_C[7] = 2.8239471e2;
        Array_coefficient_C[8] = -1.2607281e2;
        Array_coefficient_C[9] = 3.1353611e1;
        Array_coefficient_C[10] = -3.3187769;
        for (uint8_t i = 0; i <= 10; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 250 °С до 1064 °С
    } else if (TEMF >= 1.923 && TEMF < 11.361) {
        Array_coefficient_C[0] = 1.334584505e1;
        Array_coefficient_C[1] = 1.472644573e2;
        Array_coefficient_C[2] = -1.844024844e1;
        Array_coefficient_C[3] = 4.031129726;
        Array_coefficient_C[4] = -6.249428360e-1;
        Array_coefficient_C[5] = 6.468412046e-2;
        Array_coefficient_C[6] = -4.458750426e-3;
        Array_coefficient_C[7] = 1.994710149e-4;
        Array_coefficient_C[8] = -5.313401790e-6;
        Array_coefficient_C[9] = 6.481976217e-8;
        for (uint8_t i = 0; i <= 9; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 1064 °С до 1664.5 °С
    } else if (TEMF >= 11.361 && TEMF < 19.739) {
        Array_coefficient_C[0] = -8.199599416e1;
        Array_coefficient_C[1] = 1.553962042e2;
        Array_coefficient_C[2] = -8.342197663;
        Array_coefficient_C[3] = 4.279433549e-1;
        Array_coefficient_C[4] = -1.191577910e-2;
        Array_coefficient_C[5] = 1.492290091e-4;
        for (uint8_t i = 0; i <= 5; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 1664.5 °C до 1768.1 °C
    } else if (TEMF >= 19.739 && TEMF <= 21.103) {
        Array_coefficient_C[0] = 3.406177836e4;
        Array_coefficient_C[1] = -7.023729171e3;
        Array_coefficient_C[2] = 5.582903813e2;
        Array_coefficient_C[3] = -1.952394635e1;
        Array_coefficient_C[4] = 2.560740231e-1;
        for (uint8_t i = 0; i <= 4; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}

/*======================================ТЕРМОПАРЫ ТИПА R (ПЛАТИНА - 13% РОДИЙ / ПЛАТИНА)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА S (ПЛАТИНА - 10% РОДИЙ / ПЛАТИНА)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа S (платина — 10% родий / платина)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 61)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 8 Таблица 2)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_S(double Temperature) {
    double temf = 0.0;
    if (Temperature >= -50 && Temperature < 1064.18) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 5.40313308631e-3;
        Array_coefficient_A[2] = 1.25934289740e-5;
        Array_coefficient_A[3] = -2.32477968689e-8;
        Array_coefficient_A[4] = 3.22028823036e-11;
        Array_coefficient_A[5] = -3.31465196389e-14;
        Array_coefficient_A[6] = 2.55744251786e-17;
        Array_coefficient_A[7] = -1.25068871393e-20;
        Array_coefficient_A[8] = 2.71443176145e-24;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else if (Temperature >= 1064.18 && Temperature < 1664.5) {
        Array_coefficient_A[0] = 1.32900444085;
        Array_coefficient_A[1] = 3.34509311344e-3;
        Array_coefficient_A[2] = 6.54805192818e-6;
        Array_coefficient_A[3] = -1.64856259209e-9;
        Array_coefficient_A[4] = 1.29989605174e-14;
        for (uint8_t i = 0; i <= 4; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else if (Temperature >= 1664.5 && Temperature <= 1768.1) {
        Array_coefficient_A[0] = 1.46628232636e2;
        Array_coefficient_A[1] = -2.58430516752e-1;
        Array_coefficient_A[2] = 1.63693574641e-4;
        Array_coefficient_A[3] = -3.30439046987e-8;
        Array_coefficient_A[4] = -9.43223690612e-15;
        for (uint8_t i = 0; i <= 4; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  S (платина — 10% родий / платина)
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 68)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 8 Таблица 2)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_S(double TEMF) {
    double temperature = 0.0;
    //от минус 50 °С до 250 °С
    if (TEMF >= -0.235 && TEMF < 1.874) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 1.84949460e2;
        Array_coefficient_C[2] = -8.00504062e1;
        Array_coefficient_C[3] = 1.02237430e2;
        Array_coefficient_C[4] = -1.52248592e2;
        Array_coefficient_C[5] = 1.88821343e2;
        Array_coefficient_C[6] = -1.59085941e2;
        Array_coefficient_C[7] = 8.23027880e1;
        Array_coefficient_C[8] = -2.34181944e1;
        Array_coefficient_C[9] = 2.79786260;
        for (uint8_t i = 0; i <= 9; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 250 °С до 1064 °С
    } else if (TEMF >= 1.874 && TEMF < 10.332) {
        Array_coefficient_C[0] = 1.291507177e1;
        Array_coefficient_C[1] = 1.466298863e2;
        Array_coefficient_C[2] = -1.534713402e1;
        Array_coefficient_C[3] = 3.145945973;
        Array_coefficient_C[4] = -4.163257839e-1;
        Array_coefficient_C[5] = 3.187963771e-2;
        Array_coefficient_C[6] = -1.291637500e-3;
        Array_coefficient_C[7] = 2.183475087e-5;
        Array_coefficient_C[8] = -1.447379511e-7;
        Array_coefficient_C[9] = 8.211272125e-9;
        for (uint8_t i = 0; i <= 9; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 1064 °С до 1664.5 °С
    } else if (TEMF >= 10.332 && TEMF < 17.536) {
        Array_coefficient_C[0] = -8.087801117e1;
        Array_coefficient_C[1] = 1.621573104e2;
        Array_coefficient_C[2] = -8.536869453;
        Array_coefficient_C[3] = 4.719686976e-1;
        Array_coefficient_C[4] = -1.441693666e-2;
        Array_coefficient_C[5] = 2.081618890e-4;
        for (uint8_t i = 0; i <= 5; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 1664.5 °C до 1768.1 °С
    } else if (TEMF >= 17.536 && TEMF <= 18.694) {
        Array_coefficient_C[0] = 5.333875126e4;
        Array_coefficient_C[1] = -1.235892298e4;
        Array_coefficient_C[2] = 1.092657613e3;
        Array_coefficient_C[3] = -4.265693686e1;
        Array_coefficient_C[4] = 6.247205420e-1;
        for (uint8_t i = 0; i <= 4; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА S (ПЛАТИНА - 10% РОДИЙ / ПЛАТИНА)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА B (ПЛАТИНА - 30% РОДИЙ / ПЛАТИНА - 6% родий)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа B (платина - 30% родий / платина - 6% родий)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 62)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 13 Таблица 3)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_B(double Temperature) {
    double temf = 0.0;
    if (Temperature >= 0 && Temperature < 630.615) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = -2.4650818346e-4;
        Array_coefficient_A[2] = 5.9040421171e-6;
        Array_coefficient_A[3] = -1.3257931636e-9;
        Array_coefficient_A[4] = 1.5668291901e-12;
        Array_coefficient_A[5] = -1.6944529240e-15;
        Array_coefficient_A[6] = 6.2990347094e-19;
        for (uint8_t i = 0; i <= 6; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else if (Temperature >= 630.615 && Temperature <= 1820) {
        Array_coefficient_A[0] = -3.8938168621;
        Array_coefficient_A[1] = 2.8571747470e-2;
        Array_coefficient_A[2] = -8.4885104785e-5;
        Array_coefficient_A[3] = 1.5785280164e-7;
        Array_coefficient_A[4] = -1.6835344864e-10;
        Array_coefficient_A[5] = 1.1109794013e-13;
        Array_coefficient_A[6] = -4.4515431033e-17;
        Array_coefficient_A[7] = 9.8975640821e-21;
        Array_coefficient_A[8] = -9.3791330289e-25;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  B (платина - 30% родий / платина - 6% родий)
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 69)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 13 Таблица 3)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_B(double TEMF) {
    double temperature = 0.0;
    //от 250 °С до 700 °С
    if (TEMF >= 0.291 && TEMF < 2.431) {
        Array_coefficient_C[0] = 9.8423321e1;
        Array_coefficient_C[1] = 6.9971500e2;
        Array_coefficient_C[2] = -8.4765304e2;
        Array_coefficient_C[3] = 1.0052644e3;
        Array_coefficient_C[4] = -8.3345952e2;
        Array_coefficient_C[5] = 4.5508542e2;
        Array_coefficient_C[6] = -1.5523037e2;
        Array_coefficient_C[7] = 2.9886750e1;
        Array_coefficient_C[8] = -2.4742860;
        for (uint8_t i = 0; i <= 8; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 700 °С до 1820 °С
    } else if (TEMF >= 2.431 && TEMF <= 13.820) {
        Array_coefficient_C[0] = 2.1315071e2;
        Array_coefficient_C[1] = 2.8510504e2;
        Array_coefficient_C[2] = -5.2742887e1;
        Array_coefficient_C[3] = 9.9160804;
        Array_coefficient_C[4] = -1.2965303;
        Array_coefficient_C[5] = 1.1195870e-1;
        Array_coefficient_C[6] = -6.0625199e-3;
        Array_coefficient_C[7] = 1.8661696e-4;
        Array_coefficient_C[8] = -2.4878585e-6;
        for (uint8_t i = 0; i <= 8; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА B (ПЛАТИНА - 30% РОДИЙ / ПЛАТИНА - 6% родий)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА J (ЖЕЛЕЗО / МЕДЬ - НИКЕЛЬ (ЖЕЛЕЗО / КОНСТАНТАН)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа J (железо / медь - никель (железо / константан))
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 63)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 18 Таблица 4)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_J(double Temperature) {
    double temf = 0.0;
    if (Temperature >= -210 && Temperature < 760) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 5.0381187815e-2;
        Array_coefficient_A[2] = 3.0475836930e-5;
        Array_coefficient_A[3] = -8.5681065720e-8;
        Array_coefficient_A[4] = 1.3228195295e-10;
        Array_coefficient_A[5] = -1.7052958337e-13;
        Array_coefficient_A[6] = 2.0948090697e-16;
        Array_coefficient_A[7] = -1.2538395336e-19;
        Array_coefficient_A[8] = 1.5631725697e-23;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else if (Temperature >= 760 && Temperature <= 1200) {
        Array_coefficient_A[0] = 2.9645625684e2;
        Array_coefficient_A[1] = -1.4976127786;
        Array_coefficient_A[2] = 3.1787103924e-3;
        Array_coefficient_A[3] = -3.1847686701e-6;
        Array_coefficient_A[4] = 1.5720819004e-9;
        Array_coefficient_A[5] = -3.0691369056e-13;
        for (uint8_t i = 0; i <= 5; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  J (железо / медь - никель (железо / константан))
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 70)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 18 Таблица 4)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_J(double TEMF) {
    double temperature = 0.0;
    //от минус 210 °С до 0 °С
    if (TEMF >= -8.095 && TEMF < 0) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 1.9528268e1;
        Array_coefficient_C[2] = -1.2286185;
        Array_coefficient_C[3] = -1.0752178;
        Array_coefficient_C[4] = -5.9086933e-1;
        Array_coefficient_C[5] = -1.7256713e-1;
        Array_coefficient_C[6] = -2.8131513e-2;
        Array_coefficient_C[7] = -2.3963370e-3;
        Array_coefficient_C[8] = -8.3823321e-5;
        for (uint8_t i = 0; i <= 8; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 0 °С до 760 °С
    } else if (TEMF >= 0 && TEMF < 42.919) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 1.978425e1;
        Array_coefficient_C[2] = -2.001204e-1;
        Array_coefficient_C[3] = 1.036969e-2;
        Array_coefficient_C[4] = -2.549687e-4;
        Array_coefficient_C[5] = 3.585153e-6;
        Array_coefficient_C[6] = -5.344285e-8;
        Array_coefficient_C[7] = 5.099890e-10;
        for (uint8_t i = 0; i <= 7; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 760 °C до 1200 °C
    } else if (TEMF >= 42.919 && TEMF <= 69.553) {
        Array_coefficient_C[0] = -3.11358187e3;
        Array_coefficient_C[1] = 3.00543684e2;
        Array_coefficient_C[2] = -9.94773230;
        Array_coefficient_C[3] = 1.70276630e-1;
        Array_coefficient_C[4] = -1.43033468e-3;
        Array_coefficient_C[5] = 4.73886084e-6;
        for (uint8_t i = 0; i <= 5; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА J (ЖЕЛЕЗО / МЕДЬ - НИКЕЛЬ (ЖЕЛЕЗО / КОНСТАНТАН)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА T (МЕДЬ / МЕДЬ - НИКЕЛЬ (МЕДЬ / КОНСТАНТАН)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа T (медь / медь - никель (медь / константан))
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 63)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 23 Таблица 5)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_T(double Temperature) {
    double temf = 0.0;
    if (Temperature >= -270 && Temperature < 0) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 3.8748106364e-2;
        Array_coefficient_A[2] = 4.4194434347e-5;
        Array_coefficient_A[3] = 1.1844323105e-7;
        Array_coefficient_A[4] = 2.0032973554e-8;
        Array_coefficient_A[5] = 9.0138019559e-10;
        Array_coefficient_A[6] = 2.2651156593e-11;
        Array_coefficient_A[7] = 3.6071154205e-13;
        Array_coefficient_A[8] = 3.8493939883e-15;
        Array_coefficient_A[9] = 2.8213521925e-17;
        Array_coefficient_A[10] = 1.4251594779e-19;
        Array_coefficient_A[11] = 4.8768662286e-22;
        Array_coefficient_A[12] = 1.0795539270e-24;
        Array_coefficient_A[13] = 1.3945027062e-27;
        Array_coefficient_A[14] = 7.9795153927e-31;
        for (uint8_t i = 0; i <= 14; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else if (Temperature >= 0 && Temperature <= 400) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 3.8748106364e-2;
        Array_coefficient_A[2] = 3.3292227880e-5;
        Array_coefficient_A[3] = 2.0618243404e-7;
        Array_coefficient_A[4] = -2.1882256846e-9;
        Array_coefficient_A[5] = 1.0996880928e-11;
        Array_coefficient_A[6] = -3.0815758772e-14;
        Array_coefficient_A[7] = 4.5479135290e-17;
        Array_coefficient_A[8] = -2.7512901673e-20;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  T (медь / медь - никель (медь / константан))
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 70)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 23 Таблица 5)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_T(double TEMF) {
    double temperature = 0.0;
    //от минус 200 °С до 0 °С
    if (TEMF >= -5.603 && TEMF < 0) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 2.5949192e1;
        Array_coefficient_C[2] = -2.1316967e-1;
        Array_coefficient_C[3] = 7.9018692e-1;
        Array_coefficient_C[4] = 4.2527777e-1;
        Array_coefficient_C[5] = 1.3304473e-1;
        Array_coefficient_C[6] = 2.0241446e-2;
        Array_coefficient_C[7] = 1.2668171e-3;
        for (uint8_t i = 0; i <= 7; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 0 °С до 400 °С
    } else if (TEMF >= 0 && TEMF <= 20.872) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 2.592800e1;
        Array_coefficient_C[2] = -7.602961e-1;
        Array_coefficient_C[3] = 4.637791e-2;
        Array_coefficient_C[4] = -2.165394e-3;
        Array_coefficient_C[5] = 6.048144e-5;
        Array_coefficient_C[6] = -7.293422e-7;
        for (uint8_t i = 0; i <= 6; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА T (МЕДЬ / МЕДЬ - НИКЕЛЬ (МЕДЬ / КОНСТАНТАН)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА E (НИКЕЛЬ -ХРОМ / МЕДЬ - НИКЕЛЬ (ХРОМЕЛЬ / КОНСТАНТАН)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа E (никель - хром / медь - никель (хромель / константан))
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 64)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 25 Таблица 6)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_E(double Temperature) {
    double temf = 0.0;
    if (Temperature >= -270 && Temperature < 0) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 5.8665508708e-2;
        Array_coefficient_A[2] = 4.5410977124e-5;
        Array_coefficient_A[3] = -7.7998048686e-7;
        Array_coefficient_A[4] = -2.5800160843e-8;
        Array_coefficient_A[5] = -5.9452583057e-10;
        Array_coefficient_A[6] = -9.3214058667e-12;
        Array_coefficient_A[7] = -1.0287605534e-13;
        Array_coefficient_A[8] = -8.0370123621e-16;
        Array_coefficient_A[9] = -4.3979497391e-18;
        Array_coefficient_A[10] = -1.6414776355e-20;
        Array_coefficient_A[11] = -3.9673619516e-23;
        Array_coefficient_A[12] = -5.5827328721e-26;
        Array_coefficient_A[13] = -3.4657842013e-29;
        for (uint8_t i = 0; i <= 13; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else if (Temperature >= 0 && Temperature <= 1000) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 5.8665508710e-2;
        Array_coefficient_A[2] = 4.5032275582e-5;
        Array_coefficient_A[3] = 2.8908407212e-8;
        Array_coefficient_A[4] = -3.3056896652e-10;
        Array_coefficient_A[5] = 6.5024403270e-13;
        Array_coefficient_A[6] = -1.9197495504e-16;
        Array_coefficient_A[7] = -1.2536600497e-18;
        Array_coefficient_A[8] = 2.1489217569e-21;
        Array_coefficient_A[9] = -1.4388041782e-24;
        Array_coefficient_A[10] = 3.5960899481e-28;
        for (uint8_t i = 0; i <= 10; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  E (никель - хром / медь - никель (хромель / константан))
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 71)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 25 Таблица 6)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_E(double TEMF) {
    double temperature = 0.0;
    //от минус 200 °С до 0 °С
    if (TEMF >= -8.825 && TEMF < 0) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 1.6977288e1;
        Array_coefficient_C[2] = -4.3514970e-1;
        Array_coefficient_C[3] = -1.5859697e-1;
        Array_coefficient_C[4] = -9.2502871e-2;
        Array_coefficient_C[5] = -2.6084314e-2;
        Array_coefficient_C[6] = -4.1360199e-3;
        Array_coefficient_C[7] = -3.4034030e-4;
        Array_coefficient_C[8] = -1.1564890e-5;
        for (uint8_t i = 0; i <= 8; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 0 °С до 1000 °С
    } else if (TEMF >= 0 && TEMF <= 76.373) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 1.7057035e1;
        Array_coefficient_C[2] = -2.3301759e-1;
        Array_coefficient_C[3] = 6.5435585e-3;
        Array_coefficient_C[4] = -7.3562749e-5;
        Array_coefficient_C[5] = -1.7896001e-6;
        Array_coefficient_C[6] = 8.4036165e-8;
        Array_coefficient_C[7] = -1.3735879e-9;
        Array_coefficient_C[8] = 1.0629823e-11;
        Array_coefficient_C[9] = -3.2447087e-14;
        for (uint8_t i = 0; i <= 9; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА E (НИКЕЛЬ -ХРОМ / МЕДЬ - НИКЕЛЬ (ХРОМЕЛЬ / КОНСТАНТАН)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА K (НИКЕЛЬ - ХРОМ / НИКЕЛЬ - АЛЮМИНИЙ)======================================*/

/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа K (никель — хром/никель — алюминий)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 64)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 28 Таблица 7)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_K(double Temperature) {
    double temf = 0.0;
    if (Temperature >= -270 && Temperature < 0) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 3.9450128025e-2;
        Array_coefficient_A[2] = 2.3622373598e-5;
        Array_coefficient_A[3] = -3.2858906784e-7;
        Array_coefficient_A[4] = -4.9904828777e-9;
        Array_coefficient_A[5] = -6.7509059173e-11;
        Array_coefficient_A[6] = -5.7410327428e-13;
        Array_coefficient_A[7] = -3.1088872894e-15;
        Array_coefficient_A[8] = -1.0451609365e-17;
        Array_coefficient_A[9] = -1.9889266878e-20;
        Array_coefficient_A[10] = -1.6322697486e-23;
        for (uint8_t i = 0; i <= 10; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else if (Temperature >= 0 && Temperature <= 1372) {
        Array_coefficient_A[0] = -1.7600413686e-2;
        Array_coefficient_A[1] = 3.8921204975e-2;
        Array_coefficient_A[2] = 1.8558770032e-5;
        Array_coefficient_A[3] = -9.9457592874e-8;
        Array_coefficient_A[4] = 3.1840945719e-10;
        Array_coefficient_A[5] = -5.6072844889e-13;
        Array_coefficient_A[6] = 5.6075059059e-16;
        Array_coefficient_A[7] = -3.2020720003e-19;
        Array_coefficient_A[8] = 9.7151147152e-23;
        Array_coefficient_A[9] = -1.2104721275e-26;

        Array_coefficient_C[0] = 1.185976e-1;
        Array_coefficient_C[1] = -1.183432e-4;
        for (uint8_t i = 0; i <= 9; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
        temf += (Array_coefficient_C[0] * exp(Array_coefficient_C[1] * (pow((Temperature - 126.9686), 2))));
    } else {
        Thermocouple_hardfault();
    }

    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа K (никель — хром/никель — алюминий)
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 71)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 28 Таблица 7)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_K(double TEMF) {
    double temperature = 0.0;
    //от минус 200 °С до 0 °С
    if (TEMF >= -5.891 && TEMF < 0) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 2.5173462e1;
        Array_coefficient_C[2] = -1.1662878;
        Array_coefficient_C[3] = -1.0833638;
        Array_coefficient_C[4] = -8.9773540e-1;
        Array_coefficient_C[5] = -3.7342377e-1;
        Array_coefficient_C[6] = -8.6632643e-2;
        Array_coefficient_C[7] = -1.0450598e-2;
        Array_coefficient_C[8] = -5.1920577e-4;
        for (uint8_t i = 0; i <= 8; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 0 °С до 500 °С
    } else if (TEMF >= 0 && TEMF < 20.644) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 2.508355e1;
        Array_coefficient_C[2] = 7.860106e-2;
        Array_coefficient_C[3] = -2.503131e-1;
        Array_coefficient_C[4] = 8.315270e-2;
        Array_coefficient_C[5] = -1.228034e-2;
        Array_coefficient_C[6] = 9.804036e-4;
        Array_coefficient_C[7] = -4.413030e-5;
        Array_coefficient_C[8] = 1.057734e-6;
        Array_coefficient_C[9] = -1.052755e-8;
        for (uint8_t i = 0; i <= 9; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 500 °С до 1372 °С
    } else if (TEMF >= 20.644 && TEMF <= 54.886) {
        Array_coefficient_C[0] = -1.318058e2;
        Array_coefficient_C[1] = 4.830222e1;
        Array_coefficient_C[2] = -1.646031;
        Array_coefficient_C[3] = 5.464731e-2;
        Array_coefficient_C[4] = -9.650715e-4;
        Array_coefficient_C[5] = 8.802193e-6;
        Array_coefficient_C[6] = -3.110810e-8;
        for (uint8_t i = 0; i <= 6; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}

/*======================================ТЕРМОПАРЫ ТИПА K (НИКЕЛЬ - ХРОМ / НИКЕЛЬ - АЛЮМИНИЙ)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА N (НИКЕЛЬ - ХРОМ - КРЕМНИЙ / НИКЕЛЬ - КРЕМНИЙ (НИХРОСИЛ / НИСИЛ)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа N (никель - хром - кремний / никель - кремний (нихросил / нисил))
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 65)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 33 Таблица 8)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_N(double Temperature) {
    double temf = 0.0;
    if (Temperature >= -270 && Temperature < 0) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 2.6159105962e-2;
        Array_coefficient_A[2] = 1.0957484228e-5;
        Array_coefficient_A[3] = -9.3841111554e-8;
        Array_coefficient_A[4] = -4.6412039759e-11;
        Array_coefficient_A[5] = -2.6303357716e-12;
        Array_coefficient_A[6] = -2.2653438003e-14;
        Array_coefficient_A[7] = -7.6089300791e-17;
        Array_coefficient_A[8] = -9.3419667835e-20;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else if (Temperature >= 0 && Temperature <= 1300) {
        Array_coefficient_A[0] = 0;
        Array_coefficient_A[1] = 2.5929394601e-2;
        Array_coefficient_A[2] = 1.5710141880e-5;
        Array_coefficient_A[3] = 4.3825627237e-8;
        Array_coefficient_A[4] = -2.5261169794e-10;
        Array_coefficient_A[5] = 6.4311819339e-13;
        Array_coefficient_A[6] = -1.0063471519e-15;
        Array_coefficient_A[7] = 9.9745338992e-19;
        Array_coefficient_A[8] = -6.0863245607e-22;
        Array_coefficient_A[9] = 2.0849229339e-25;
        Array_coefficient_A[10] = -3.0682196151e-29;
        for (uint8_t i = 0; i <= 10; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  N (никель - хром - кремний / никель - кремний (нихросил / нисил))
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 72)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 33 Таблица 8)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_N(double TEMF) {
    double temperature = 0.0;
    //от минус 200 °С до 0 °С
    if (TEMF >= -3.990 && TEMF < 0) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 3.8436847e1;
        Array_coefficient_C[2] = 1.1010485;
        Array_coefficient_C[3] = 5.2229312;
        Array_coefficient_C[4] = 7.2060525;
        Array_coefficient_C[5] = 5.8488586;
        Array_coefficient_C[6] = 2.7754916;
        Array_coefficient_C[7] = 7.7075166e-1;
        Array_coefficient_C[8] = 1.1582665e-1;
        Array_coefficient_C[9] = 7.3138868e-3;
        for (uint8_t i = 0; i <= 9; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 0 °С до 600 °С
    } else if (TEMF >= 0 && TEMF < 20.613) {
        Array_coefficient_C[0] = 0;
        Array_coefficient_C[1] = 3.86896e1;
        Array_coefficient_C[2] = -1.08267;
        Array_coefficient_C[3] = 4.70205e-2;
        Array_coefficient_C[4] = -2.12169e-6;
        Array_coefficient_C[5] = -1.17272e-4;
        Array_coefficient_C[6] = 5.39280e-6;
        Array_coefficient_C[7] = -7.98156e-8;
        for (uint8_t i = 0; i <= 7; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 600 °С до 1300 °C
    } else if (TEMF >= 20.613 && TEMF <= 47.513) {
        Array_coefficient_C[0] = 1.972485e1;
        Array_coefficient_C[1] = 3.300943e1;
        Array_coefficient_C[2] = -3.915159e-1;
        Array_coefficient_C[3] = 9.855391e-3;
        Array_coefficient_C[4] = -1.274371e-4;
        Array_coefficient_C[5] = 7.767022e-7;
        for (uint8_t i = 0; i <= 5; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА N (НИКЕЛЬ - ХРОМ - КРЕМНИЙ / НИКЕЛЬ - КРЕМНИЙ (НИХРОСИЛ / НИСИЛ)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА A-1 (ВОЛЬФРАМ - РЕНИЙ / ВОЛЬФРАМ - РЕНИЙ)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа A-1 (вольфрам - рений / вольфрам - рений))
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 66)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 38 Таблица 9)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_A1(double Temperature) {
    double temf = 0.0;
    if (Temperature >= 0 && Temperature <= 2500) {
        Array_coefficient_A[0] = 7.1564735e-4;
        Array_coefficient_A[1] = 1.1951905e-2;
        Array_coefficient_A[2] = 1.6672625e-5;
        Array_coefficient_A[3] = -2.8287807e-8;
        Array_coefficient_A[4] = 2.8397839e-11;
        Array_coefficient_A[5] = -1.8505007e-14;
        Array_coefficient_A[6] = 7.3632123e-18;
        Array_coefficient_A[7] = -1.6148878e-21;
        Array_coefficient_A[8] = 1.4901679e-25;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  A-1 (вольфрам - рений / вольфрам - рений))
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 73)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 38 Таблица 9)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_A1(double TEMF) {
    double temperature = 0.0;
    //от 0 °С до 2500 °С
    if (TEMF >= 0 && TEMF <= 33.640) {
        Array_coefficient_C[0] = 0.9643027;
        Array_coefficient_C[1] = 7.9495086e1;
        Array_coefficient_C[2] = -4.9990310;
        Array_coefficient_C[3] = 0.6341776;
        Array_coefficient_C[4] = -4.7440967e-2;
        Array_coefficient_C[5] = 2.1811337e-3;
        Array_coefficient_C[6] = -5.8324228e-5;
        Array_coefficient_C[7] = 8.2433725e-7;
        Array_coefficient_C[8] = -4.5928480e-9;
        for (uint8_t i = 0; i <= 8; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА A-1 (ВОЛЬФРАМ - РЕНИЙ / ВОЛЬФРАМ - РЕНИЙ)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА A-2 (ВОЛЬФРАМ - РЕНИЙ / ВОЛЬФРАМ - РЕНИЙ)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа A-2 (вольфрам - рений / вольфрам - рений))
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 66)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 45 Таблица 10)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_A2(double Temperature) {
    double temf = 0.0;
    if (Temperature >= 0 && Temperature <= 1800) {
        Array_coefficient_A[0] = -1.0850558e-4;
        Array_coefficient_A[1] = 1.1642292e-2;
        Array_coefficient_A[2] = 2.1280289e-5;
        Array_coefficient_A[3] = -4.4258402e-8;
        Array_coefficient_A[4] = 5.5652058e-11;
        Array_coefficient_A[5] = -4.3801310e-14;
        Array_coefficient_A[6] = 2.0228390e-17;
        Array_coefficient_A[7] = -4.9354041e-21;
        Array_coefficient_A[8] = 4.8119846e-25;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  A-2 (вольфрам - рений / вольфрам - рений))
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 73)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 45 Таблица 10)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_A2(double TEMF) {
    double temperature = 0.0;
    //от 0 °С до 1800 °С
    if (TEMF >= 0 && TEMF <= 27.232) {
        Array_coefficient_C[0] = 1.1196428;
        Array_coefficient_C[1] = 8.0569397e1;
        Array_coefficient_C[2] = -6.2279122;
        Array_coefficient_C[3] = 0.9337015;
        Array_coefficient_C[4] = -8.2608051e-2;
        Array_coefficient_C[5] = 4.4110979e-3;
        Array_coefficient_C[6] = -1.3610551e-4;
        Array_coefficient_C[7] = 2.2183851e-6;
        Array_coefficient_C[8] = -1.4527698e-8;
        for (uint8_t i = 0; i <= 8; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА A-2 (ВОЛЬФРАМ - РЕНИЙ / ВОЛЬФРАМ - РЕНИЙ)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА A-3 (ВОЛЬФРАМ - РЕНИЙ / ВОЛЬФРАМ - РЕНИЙ)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа A-3 (вольфрам - рений / вольфрам - рений))
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 66)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 51 Таблица 11)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_A3(double Temperature) {
    double temf = 0.0;
    if (Temperature >= 0 && Temperature <= 1800) {
        Array_coefficient_A[0] = -1.0649133e-4;
        Array_coefficient_A[1] = 1.1686478e-2;
        Array_coefficient_A[2] = 1.8022157e-5;
        Array_coefficient_A[3] = -3.3436998e-8;
        Array_coefficient_A[4] = 3.7081688e-11;
        Array_coefficient_A[5] = -2.5748444e-14;
        Array_coefficient_A[6] = 1.0301893e-17;
        Array_coefficient_A[7] = -2.0735944e-21;
        Array_coefficient_A[8] = 1.4678450e-25;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  A-3 (вольфрам - рений / вольфрам - рений))
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 73)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 51 Таблица 11)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_A3(double TEMF) {
    double temperature = 0.0;
    //от 0 °С до 1800 °С
    if (TEMF >= 0 && TEMF <= 26.773) {
        Array_coefficient_C[0] = 0.8769216;
        Array_coefficient_C[1] = 8.1483231e1;
        Array_coefficient_C[2] = -5.9344173;
        Array_coefficient_C[3] = 0.8699340;
        Array_coefficient_C[4] = -7.6797687e-2;
        Array_coefficient_C[5] = 4.1814387e-3;
        Array_coefficient_C[6] = -1.3439670e-4;
        Array_coefficient_C[7] = 2.342409e-6;
        Array_coefficient_C[8] = -1.6988727e-8;
        for (uint8_t i = 0; i <= 8; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА A-3 (ВОЛЬФРАМ - РЕНИЙ / ВОЛЬФРАМ - РЕНИЙ)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА L (ХРОМЕЛЬ - КОПЕЛЬ)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа L (хромель / копель)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 67)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 56 Таблица 12)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_L(double Temperature) {
    double temf = 0.0;
    if (Temperature >= -200 && Temperature < 0) {
        Array_coefficient_A[0] = -5.8952244e-5;
        Array_coefficient_A[1] = 6.3391502e-2;
        Array_coefficient_A[2] = 6.7592964e-5;
        Array_coefficient_A[3] = 2.0672566e-7;
        Array_coefficient_A[4] = 5.5720884e-9;
        Array_coefficient_A[5] = 5.7133860e-11;
        Array_coefficient_A[6] = 3.2995593e-13;
        Array_coefficient_A[7] = 9.9232420e-16;
        Array_coefficient_A[8] = 1.2079584e-18;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else if (Temperature >= 0 && Temperature <= 800) {
        Array_coefficient_A[0] = -1.8656953e-5;
        Array_coefficient_A[1] = 6.3310975e-2;
        Array_coefficient_A[2] = 6.0153091e-5;
        Array_coefficient_A[3] = -8.0073134e-8;
        Array_coefficient_A[4] = 9.6946071e-11;
        Array_coefficient_A[5] = -3.6047289e-14;
        Array_coefficient_A[6] = -2.4694775e-16;
        Array_coefficient_A[7] = 4.2880341e-19;
        Array_coefficient_A[8] = -2.0725297e-22;
        for (uint8_t i = 0; i <= 8; i++) {
            temf += (Array_coefficient_A[i] * (pow(Temperature, i)));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета температуры для термопар типа  L (хромель / копель)
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 74)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 56 Таблица 12)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_L(double TEMF) {
    double temperature = 0.0;
    //от минус 200 °С до 0 °С
    if (TEMF >= -9.488 && TEMF < 0) {
        Array_coefficient_C[0] = 1.1573067e-4;
        Array_coefficient_C[1] = 1.5884573e1;
        Array_coefficient_C[2] = 4.0458554e-2;
        Array_coefficient_C[3] = 0.3170064;
        Array_coefficient_C[4] = 0.1666128;
        Array_coefficient_C[5] = 5.1946958e-2;
        Array_coefficient_C[6] = 9.5288883e-3;
        Array_coefficient_C[7] = 1.0301283e-3;
        Array_coefficient_C[8] = 6.0654431e-5;
        Array_coefficient_C[9] = 1.5131878e-6;
        for (uint8_t i = 0; i <= 9; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
        //от 0 °С до 800 °С
    } else if (TEMF >= 0 && TEMF <= 66.466) {
        Array_coefficient_C[0] = 7.2069422e-3;
        Array_coefficient_C[1] = 1.5775525e1;
        Array_coefficient_C[2] = -0.2261183;
        Array_coefficient_C[3] = 9.4286756e-3;
        Array_coefficient_C[4] = -3.5394655e-4;
        Array_coefficient_C[5] = 1.0050886e-5;
        Array_coefficient_C[6] = -1.9323678e-7;
        Array_coefficient_C[7] = 2.3816891e-9;
        Array_coefficient_C[8] = -1.7130654e-11;
        Array_coefficient_C[9] = 5.4857331e-14;
        for (uint8_t i = 0; i <= 9; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА L (ХРОМЕЛЬ - КОПЕЛЬ)======================================*/

/*======================================ТЕРМОПАРЫ ТИПА M (МЕДЬ - КОПЕЛЬ)======================================*/
/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа M (медь / копель)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 67)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 59 Таблица 13)
 *  @param  Temperature - Температура (°С)
 *  @retval Возвращает ТЭДС
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_temperature_to_TEMF_M(double Temperature) {
    double temf = 0.0;
    if (Temperature >= -200 && Temperature <= 100) {
        Array_coefficient_A[0] = 2.4455560e-6;
        Array_coefficient_A[1] = 4.2638917e-2;
        Array_coefficient_A[2] = 5.0348392e-5;
        Array_coefficient_A[3] = -4.4974485e-8;
        for (uint8_t i = 0; i <= 3; i++) {
            temf += Array_coefficient_A[i] * (pow(Temperature, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temf;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета ТЭДС для термопар типа M (медь / копель)
 *  @param  TEMF - ТЭДС (мВ)
 *  @attention
 *  Формула: ГОСТ Р 8.85-2001(стр. 74)
 *  Таблица: ГОСТ Р 8.85-2001(стр. 59 Таблица 13)
 *  @retval Возвращает Температуру
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_TEMF_to_temperature_M(double TEMF) {
    double temperature = 0.0;
    //от минус 200 °С до 100 °С
    if (TEMF >= -6.154 && TEMF <= 4.722) {
        Array_coefficient_C[0] = 0.00479501;
        Array_coefficient_C[1] = 23.4639;
        Array_coefficient_C[2] = -0.654354;
        Array_coefficient_C[3] = 0.0490024;
        Array_coefficient_C[4] = -0.00335607;
        Array_coefficient_C[5] = -0.000191633;
        Array_coefficient_C[6] = -0.000213483;
        Array_coefficient_C[7] = 0.0000831792;
        Array_coefficient_C[8] = 0.0000146081;
        Array_coefficient_C[9] = -2.11365e-6;
        Array_coefficient_C[10] = -4.32459e-7;
        for (uint8_t i = 0; i <= 10; i++) {
            temperature += Array_coefficient_C[i] * (pow(TEMF, i));
        }
    } else {
        Thermocouple_hardfault();
    }
    return temperature;
}
/*======================================ТЕРМОПАРЫ ТИПА M (МЕДЬ - КОПЕЛЬ)======================================*/

/*
 **************************************************************************************************
 *  @breif Обработчик ошибок
 **************************************************************************************************
 */
void thermocouple_calculator::Thermocouple_hardfault(void) {
    flag_hardfault_state = true;
}

/*
 **************************************************************************************************
 *  @breif Функция для расчета Температуры для термопар
 *  @param  Temperature_cold_junior - Температура холодного спая
 *  @param  TEMF - ТЭДС, замеренная на холодном спае
 *  @param  Type - тип термопары
 *  @retval Возвращает рассчитанную температуру горячего спая
 **************************************************************************************************
 */
double thermocouple_calculator::Thermocouple_Get_Temperature(double Temperature_cold_junior, double TEMF, uint8_t Type) {
    double thermocouple_temperature = 0;
    double temf = 0;
    switch (Type) {
    case Thermocouple_R:
        temf = Thermocouple_temperature_to_TEMF_R(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_R(temf);
        break;
    case Thermocouple_S:
        temf = Thermocouple_temperature_to_TEMF_S(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_S(temf);
        break;
    case Thermocouple_B:
        temf = Thermocouple_temperature_to_TEMF_B(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_B(temf);
        break;
    case Thermocouple_J:
        temf = Thermocouple_temperature_to_TEMF_J(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_J(temf);
        break;
    case Thermocouple_T:
        temf = Thermocouple_temperature_to_TEMF_T(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_T(temf);
        break;
    case Thermocouple_E:
        temf = Thermocouple_temperature_to_TEMF_E(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_E(temf);
        break;
    case Thermocouple_K:
        temf = Thermocouple_temperature_to_TEMF_K(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_K(temf);
        break;
    case Thermocouple_N:
        temf = Thermocouple_temperature_to_TEMF_N(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_N(temf);
        break;
    case Thermocouple_A1:
        temf = Thermocouple_temperature_to_TEMF_A1(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_A1(temf);
        break;
    case Thermocouple_A2:
        temf = Thermocouple_temperature_to_TEMF_A2(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_A2(temf);
        break;
    case Thermocouple_A3:
        temf = Thermocouple_temperature_to_TEMF_A3(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_A3(temf);
        break;
    case Thermocouple_L:
        temf = Thermocouple_temperature_to_TEMF_L(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_L(temf);
        break;
    case Thermocouple_M:
        temf = Thermocouple_temperature_to_TEMF_M(Temperature_cold_junior);
        temf += TEMF;
        thermocouple_temperature = Thermocouple_TEMF_to_temperature_M(temf);
        break;
    }
    return thermocouple_temperature;
}


thermocouple_calculator::thermocouple_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::thermocouple_calculator)
{
    ui->setupUi(this);
    ui->lineEdit_name->setText("ТПП (Платина - 13% родий/платина)");
    ui->lineEdit_diapazon->setText("от -0.225 мВ до 21.103 мВ (от -50 °C до 1768.1 °C)");
    ui->lineEdit_cold_junior_temperature->setText("0");
    ui->lineEdit_temf->setText("0");
    ui->lineEdit_temperature_calc->setText("0.0");
}

thermocouple_calculator::~thermocouple_calculator()
{
    delete ui;
}

void thermocouple_calculator::on_comboBox_type_currentTextChanged(const QString &arg1)
{
    if (arg1 == "R"){
        ui->lineEdit_name->setText("ТПП (Платина - 13% родий/платина)");
        ui->lineEdit_diapazon->setText("от -0.225 мВ до 21.103 мВ (от -50 °C до 1768.1 °C)");
    }else if (arg1 == "S"){
        ui->lineEdit_name->setText("ТПП (Платина - 10% родий/платина)");
        ui->lineEdit_diapazon->setText("от -0.235 мВ до 18.694 мВ (от -50 °C до 1768.1 °C)");
    }else if (arg1 == "B"){
        ui->lineEdit_name->setText("ТПР (Платина - 30% родий/платина - 6% родий)");
        ui->lineEdit_diapazon->setText("от 0.291 мВ до 13.820 мВ (от 250 °C до 1820 °C)");
    }else if (arg1 == "J"){
        ui->lineEdit_name->setText("ТЖК [Железо/медь - никель (железо/константан)]");
        ui->lineEdit_diapazon->setText("от -8.095 мВ до 69.553 мВ (от -210 °C до 1200 °C)");
    }else if (arg1 == "T"){
        ui->lineEdit_name->setText("ТМК [Медь/медь - никель (медь/константан)]");
        ui->lineEdit_diapazon->setText("от -5.603 мВ до 20.872 мВ (от -200 °C до 400 °C)");
    }else if (arg1 == "E"){
        ui->lineEdit_name->setText("ТХКн [Никель - хром/медь - никель (хромель/константан)]");
        ui->lineEdit_diapazon->setText("от -8.825 мВ до 76.373 мВ (от -200 °C до 1000 °C)");
    }else if (arg1 == "K"){
        ui->lineEdit_name->setText("ТХА [Никель - хром/никель - алюминий (хромель/алюмель)]");
        ui->lineEdit_diapazon->setText("от -5.891 мВ до 54.886 мВ (от -200 °C до 1372 °C)");
    }else if (arg1 == "N"){
        ui->lineEdit_name->setText("ТНН [Никель - хром - кремний/никель - кремний (нихросил/нисил)]");
        ui->lineEdit_diapazon->setText("от -3.990 мВ до 47.513 мВ (от -200 °C до 1300 °C)");
    }else if (arg1 == "A-1"){
        ui->lineEdit_name->setText("ТВР (Вольфрам - рений/вольфрам - рений)");
        ui->lineEdit_diapazon->setText("от 0 мВ до 33.640 мВ (от 0 °C до 2500 °C)");
    }else if (arg1 == "A-2"){
        ui->lineEdit_name->setText("ТВР (Вольфрам - рений/вольфрам - рений)");
        ui->lineEdit_diapazon->setText("от 0 мВ до 27.232 мВ (от 0 °C до 1800 °C)");
    }else if (arg1 == "A-3"){
        ui->lineEdit_name->setText("ТВР (Вольфрам - рений/вольфрам - рений)");
        ui->lineEdit_diapazon->setText("от 0 мВ до 26.773 мВ (от 0 °C до 1800 °C)");
    }else if (arg1 == "L"){
        ui->lineEdit_name->setText("ТХК (Хромель/копель)");
        ui->lineEdit_diapazon->setText("от -9.488 мВ до 66.466 мВ (от -200 °C до 800 °C)");
    }else if (arg1 == "M"){
        ui->lineEdit_name->setText("ТМК (Медь/копель)");
        ui->lineEdit_diapazon->setText("от -6.154 мВ до 4.722 мВ (от -200 °C до 100 °C)");
    }
    on_pushButton_clicked();
}


void thermocouple_calculator::keyPressEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_Enter){
        on_pushButton_clicked();
    }
}

void thermocouple_calculator::on_pushButton_clicked()
{
    flag_hardfault_state = false;
    bool status_convert = false;
    QString Text_data;
    Text_data = ui->lineEdit_cold_junior_temperature->text().replace(",", ".");
    double Temperature_cold_junior = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_cold_junior_temperature->text())));
    }
    Text_data = ui->lineEdit_temf->text().replace(",", ".");
    double TEMF = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_temf->text())));
    }

    double TEMF_cold_junior = 0;

    uint8_t Type = 0;

    if (ui->comboBox_type->currentText() == "R"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_R(Temperature_cold_junior);
        Type = Thermocouple_R;
    }else if (ui->comboBox_type->currentText() == "S"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_S(Temperature_cold_junior);
        Type = Thermocouple_S;
    }else if (ui->comboBox_type->currentText() == "B"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_B(Temperature_cold_junior);
        Type = Thermocouple_B;
    }else if (ui->comboBox_type->currentText() == "J"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_J(Temperature_cold_junior);
        Type = Thermocouple_J;
    }else if (ui->comboBox_type->currentText() == "T"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_T(Temperature_cold_junior);
        Type = Thermocouple_T;
    }else if (ui->comboBox_type->currentText() == "E"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_E(Temperature_cold_junior);
        Type = Thermocouple_E;
    }else if (ui->comboBox_type->currentText() == "K"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_K(Temperature_cold_junior);
        Type = Thermocouple_K;
    }else if (ui->comboBox_type->currentText() == "N"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_N(Temperature_cold_junior);
        Type = Thermocouple_N;
    }else if (ui->comboBox_type->currentText() == "A-1"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_A1(Temperature_cold_junior);
        Type = Thermocouple_A1;
    }else if (ui->comboBox_type->currentText() == "A-2"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_A2(Temperature_cold_junior);
        Type = Thermocouple_A2;
    }else if (ui->comboBox_type->currentText() == "A-3"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_A3(Temperature_cold_junior);
        Type = Thermocouple_A3;
    }else if (ui->comboBox_type->currentText() == "L"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_L(Temperature_cold_junior);
        Type = Thermocouple_L;
    }else if (ui->comboBox_type->currentText() == "M"){
        TEMF_cold_junior = Thermocouple_temperature_to_TEMF_M(Temperature_cold_junior);
        Type = Thermocouple_M;
    }

    ui->statusbar->showMessage(QString ("ТЭДС для температуры холодного спая: " + (QString::number(TEMF_cold_junior,'f',3))));
    double Temperature = Thermocouple_Get_Temperature(Temperature_cold_junior,TEMF,Type);

    if (!flag_hardfault_state){
        ui->lineEdit_temperature_calc->setText(QString::number(Temperature,'f',1));

    }else{
        ui->lineEdit_temperature_calc->setText("Превышен диапазон");
    }




}

