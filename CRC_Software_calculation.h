/**
 ******************************************************************************
 *  @file CRC_Software_calculation.c
 *  @brief Программный расчет CRC: CRC8, CRC16, CRC32
 *  @author Волков Олег
 *  @date 03.05.2023
 *
 *  YouTube: https://www.youtube.com/channel/UCzZKTNVpcMSALU57G1THoVw
 *  GitHub: https://github.com/Solderingironspb
 *  Группа ВК: https://vk.com/solderingiron.stm32
 *  Про CRC на википедии: https://ru.wikipedia.org/wiki/%D0%A6%D0%B8%D0%BA%D0%BB%D0%B8%D1%87%D0%B5%D1%81%D0%BA%D0%B8%D0%B9_%D0%B8%D0%B7%D0%B1%D1%8B%D1%82%D0%BE%D1%87%D0%BD%D1%8B%D0%B9_%D0%BA%D0%BE%D0%B4
 *  Урок по CRC: https://youtu.be/YyQonUJrBn4
 *  Для проверки себя: http://www.sunshine2k.de/coding/javascript/crc/crc_js.html
 *
 ******************************************************************************
 */

#ifndef CRC_SOFTWARE_CALCULATION_H_
#define CRC_SOFTWARE_CALCULATION_H_

#include "mainwindow.h"
#include <stdint.h>
#include <stdbool.h>

/* Примеры CRC*/
/* CRC8:                InitVal 0x00, Polynome 0x07, RefIn false, Refout false, XorOut 0x00;
 * CRC8_SAE_J1850:      InitVal 0xFF, Polynome 0x1D, RefIn false, Refout false, XorOut 0xFF;
 * CRC8_SAE_J1850_ZERO: InitVal 0x00, Polynome 0x1D, RefIn false, Refout false, XorOut 0x00;
 * CRC8_8H2F:           InitVal 0xFF, Polynome 0x2F, RefIn false, Refout false, XorOut 0xFF;
 * CRC8_CDMA2000:       InitVal 0xFF, Polynome 0x9B, RefIn false, Refout false, XorOut 0x00;
 * CRC8_DARC:           InitVal 0x00, Polynome 0x39, RefIn true,  Refout true,  XorOut 0x00;
 * CRC8_DVB_S2:         InitVal 0x00, Polynome 0xD5, RefIn false, Refout false, XorOut 0x00;
 * CRC8_EBU:            InitVal 0xFF, Polynome 0x1D, RefIn true,  Refout true , XorOut 0x00;
 * CRC8_ICODE:          InitVal 0xFD, Polynome 0x1D, RefIn false, Refout false, XorOut 0x00;
 * CRC8_ITU:            InitVal 0x00, Polynome 0x07, RefIn false, Refout false, XorOut 0x55;
 * CRC8_MAXIM:          InitVal 0x00, Polynome 0x31, RefIn true,  Refout true , XorOut 0x00;
 * CRC8_ROHC:           InitVal 0xFF, Polynome 0x07, RefIn true,  Refout true , XorOut 0x00;
 * CRC8_WCDMA:          InitVal 0x00, Polynome 0x9B, RefIn true,  Refout true , XorOut 0x00;
 *
 * CRC16_CCIT_ZERO:     InitVal 0x0000, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
 * CRC16_ARC:           InitVal 0x0000, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0x0000;
 * CRC16_AUG_CCITT:     InitVal 0x1D0F, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
 * CRC16_BUYPASS:       InitVal 0x0000, Polynome 0x8005, RefIn false, Refout false, XorOut 0x0000;
 * CRC16_CCITT_FALSE:   InitVal 0xFFFF, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
 * CRC16_CDMA2000:      InitVal 0xFFFF, Polynome 0xC867, RefIn false, Refout false, XorOut 0x0000;
 * CRC16_DDS_110:       InitVal 0x800D, Polynome 0x8005, RefIn false, Refout false, XorOut 0x0000;
 * CRC16_DECT_R:        InitVal 0x0000, Polynome 0x0589, RefIn false, Refout false, XorOut 0x0001;
 * CRC16_DECT_X:        InitVal 0x0000, Polynome 0x0589, RefIn false, Refout false, XorOut 0x0000;
 * CRC16_DNP:           InitVal 0x0000, Polynome 0x3D65, RefIn true,  Refout true,  XorOut 0xFFFF;
 * CRC16_EN_13757:      InitVal 0x0000, Polynome 0x3D65, RefIn false, Refout false, XorOut 0xFFFF;
 * CRC16_GENIBUS:       InitVal 0xFFFF, Polynome 0x1021, RefIn false, Refout false, XorOut 0xFFFF;
 * CRC16_MAXIM:         InitVal 0x0000, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0xFFFF;
 * CRC16_MCRF4XX:       InitVal 0xFFFF, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
 * CRC16_RIELLO:        InitVal 0xB2AA, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
 * CRC16_T10_DIF:       InitVal 0x0000, Polynome 0x8BB7, RefIn false, Refout false, XorOut 0x0000;
 * CRC16_TELEDISK:      InitVal 0x0000, Polynome 0xA097, RefIn false, Refout false, XorOut 0x0000;
 * CRC16_TMS37157:      InitVal 0x89EC, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
 * CRC16_USB:           InitVal 0xFFFF, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0xFFFF;
 * CRC16_A:             InitVal 0xC6C6, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
 * CRC16_KERMIT:        InitVal 0x0000, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
 * CRC16_MODBUS:        InitVal 0xFFFF, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0x0000;
 * CRC16_X_25:          InitVal 0xFFFF, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0xFFFF;
 * CRC16_XMODEM:        InitVal 0x0000, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
 *
 * CRC32:               InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn true,  Refout true,  XorOut 0xFFFFFFFF;
 * CRC32_BZIP2:         InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn false, Refout false, XorOut 0xFFFFFFFF;
 * CRC32_C:             InitVal 0xFFFFFFFF, Polynome 0x1EDC6F41, RefIn true,  Refout true,  XorOut 0xFFFFFFFF;
 * CRC32_D:             InitVal 0xFFFFFFFF, Polynome 0xA833982B, RefIn true,  Refout true,  XorOut 0xFFFFFFFF;
 * CRC32_MPEG2:         InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn false, Refout false, XorOut 0x00000000;
 * CRC32_POSIX:         InitVal 0x00000000, Polynome 0x04C11DB7, RefIn false, Refout false, XorOut 0xFFFFFFFF;
 * CRC32_Q:             InitVal 0x00000000, Polynome 0x814141AB, RefIn false, Refout false, XorOut 0x00000000;
 * CRC32_JAMCRC:        InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn true,  Refout true,  XorOut 0x00000000;
 * CRC32_XFER:          InitVal 0x00000000, Polynome 0x000000AF, RefIn false, Refout false, XorOut 0x00000000;
 */

/*Пример использования функций*/

/*
uint32_t Arr[4] = { 0x4F32CCDE, 0x5ABBCDDF, 0x5412DDAA, 0xFE32CB1A };
uint16_t Arr1[8] = { 0x4F32, 0xCCDE, 0x5ABB, 0xCDDF, 0x5412, 0xDDAA, 0xFE32, 0xCB1A };
uint8_t Arr2[16] = { 0x4F, 0x32, 0xCC, 0xDE, 0x5A, 0xBB, 0xCD, 0xDF, 0x54, 0x12, 0xDD, 0xAA, 0xFE, 0x32, 0xCB, 0x1A };

printf("CRC32_D = 0x%X\r\n", CRC32_Calculate_software((uint32_t*) &Arr, sizeof(Arr) / 4, 0xFFFFFFFF, 0xA833982B, true, true, 0xFFFFFFFF));
printf("CRC32_D = 0x%X\r\n", CRC32_Bytes_Calculate_software((uint8_t*) &Arr2, sizeof(Arr2), 0xFFFFFFFF, 0xA833982B, true, true, 0xFFFFFFFF));
printf("CRC16_MODBUS = 0x%X\r\n", CRC16_Calculate_software((uint16_t*) &Arr1, sizeof(Arr1) / 2, 0xFFFF, 0x8005, true, true, 0x0000));
printf("CRC16_MODBUS = 0x%X\r\n", CRC16_Bytes_Calculate_software((uint8_t*) &Arr2, sizeof(Arr2), 0xFFFF, 0x8005, true, true, 0x0000));
printf("CRC8_MAXIM = 0x%X\r\n", CRC8_Bytes_Calculate_software((uint8_t*) &Arr2, sizeof(Arr2), 0x00, 0x31, true, true, 0x00));

Получим в консоли:
CRC32_D = 0x719C9ACC
CRC32_D = 0x719C9ACC
CRC16_MODBUS = 0x7804
CRC16_MODBUS = 0x7804
CRC8_MAXIM = 0x86

*/

//Функции:
/*Реверс бит*/
uint8_t Reverse_LSB_MSB_8_Bit(uint8_t *Data); //Функция реверса 8 бит от LSB к MSB
uint16_t Reverse_LSB_MSB_16_Bit(uint16_t *Data); //Функция реверса 16 бит от LSB к MSB
uint32_t Reverse_LSB_MSB_32_Bit(uint32_t *Data); //Функция реверса 32 бит от LSB к MSB

/*CRC-8*/
/*Функция расчета контрольной суммы CRC8 с различными параметрами. Функция работает с данными, которые представлены в 8-битном формате.*/
uint8_t CRC8_Bytes_Calculate_software(uint8_t *Data, uint32_t Buffer_lenght, uint8_t InitVal, uint8_t Polynome, bool RefIn, bool RefOut, uint8_t XorOut);

/*CRC-16*/
/*Функция расчета контрольной суммы CRC16 с различными параметрами. Функция работает с данными, которые представлены в 8-битном формате.*/
uint16_t CRC16_Bytes_Calculate_software(uint8_t *Data, uint32_t Buffer_lenght, uint16_t InitVal, uint16_t Polynome, bool RefIn, bool RefOut, uint16_t XorOut);
/*Функция расчета контрольной суммы CRC16 с различными параметрами. Функция работает с данными, которые представлены в 16-битном формате.*/
uint16_t CRC16_Calculate_software(uint16_t *Data, uint32_t Buffer_lenght, uint16_t InitVal, uint16_t Polynome, bool RefIn, bool RefOut, uint16_t XorOut);

/*CRC-32*/
/*Функция расчета контрольной суммы CRC32 с различными параметрами. Функция работает с данными, которые представлены в 8-битном формате.*/
uint32_t CRC32_Bytes_Calculate_software(uint8_t *Data, uint32_t Buffer_lenght, uint32_t InitVal, uint32_t Polynome, bool RefIn, bool RefOut, uint32_t XorOut);
/*Функция расчета контрольной суммы CRC32 с различными параметрами. Функция работает с данными, которые представлены в 32-битном формате.*/
uint32_t CRC32_Calculate_software(uint32_t *Data, uint32_t Buffer_lenght, uint32_t InitVal, uint32_t Polynome, bool RefIn, bool RefOut, uint32_t XorOut);

#endif /* CRC_SOFTWARE_CALCULATION_H_ */
