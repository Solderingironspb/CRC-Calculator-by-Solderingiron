/**
 ******************************************************************************
 *  @file CRC_Software_calculation.h
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

#include <CRC_Software_calculation.h>

/*
 **************************************************************************************************
 *  @breif Функция реверса 8 бит от LSB к MSB
 *  Пример:           0100 1111 подаем в функцию,
 *  на выходе получем 1111 0010
 *  @param  *Data - данные, которые хотим преобразовать
 *  @retval Возвращает реверсированные данные
 **************************************************************************************************
 */

uint8_t Reverse_LSB_MSB_8_Bit(uint8_t *Data) {
	uint8_t Result = 0;
	for (uint16_t i = 0; i < 8; i++) {
		uint8_t X = *Data;
		X = X << (i);
		X = X >> (7);
		if (X) {
			Result |= (1 << i);
		}
	}
	return Result;
}

/*
 **************************************************************************************************
 *  @breif Функция реверса 16 бит от LSB к MSB
 *  Пример:           0100 1111 0011 0010 подаем в функцию,
 *  на выходе получем 0100 1100 1111 0010
 *  @param  *Data - данные, которые хотим преобразовать
 *  @retval Возвращает реверсированные данные
 **************************************************************************************************
 */

uint16_t Reverse_LSB_MSB_16_Bit(uint16_t *Data) {
	uint16_t Result = 0;
	for (uint8_t i = 0; i < 16; i++) {
		uint16_t X = *Data;
		X = X << (i);
		X = X >> (15);
		if (X) {
			Result |= (1 << i);
		}
	}
	return Result;
}

/*
 **************************************************************************************************
 *  @breif Функция реверса 32 бит от LSB к MSB
 *  Пример:           0100 1111 0011 0010 1100 1100 1101 1110 подаем в функцию,
 *  на выходе получем 0111 1011 0011 0011 0100 1100 1111 0010
 *  @param  *Data - данные, которые хотим преобразовать
 *  @retval Возвращает реверсированные данные
 **************************************************************************************************
 */

uint32_t Reverse_LSB_MSB_32_Bit(uint32_t *Data) {
	uint32_t Result = 0;
	for (uint8_t i = 0; i < 32; i++) {
		uint32_t X = *Data;
		X = X << (i);
		X = X >> (31);
		if (X) {
			Result |= (1 << i);
		}
	}
	return Result;
}

/*
 **************************************************************************************************
 *  @breif Функция расчета контрольной суммы CRC8 с различными параметрами
 *  @attention Функция работает с данными, которые представлены в 8-битном формате
 *  @param  *Data - данные, от которых будем вычислять контрольную сумму.
 *  @param  Buffer_lenght - длинна данных в 8 битах. Т.е. 1 - это 1 байт.
 *  @param  InitVal - Начальное значение CRC8. Например 0xFF
 *  @param  Polynome - Полином. Например 0x9B
 *  @param  RefIn - флаг, указывающий на начало и направление вычислений,
 *          для обнаружения пакетов ошибок должно соответствовать порядку передачи в канале.
 *          Существует два варианта: False — начиная со старшего значащего бита (MSB-first)
 *          или True — с младшего (LSB-first)
 *  @param  RefOut - флаг, определяющий, инвертируется ли порядок битов регистра при входе на элемент XOR
 *  @param  XorOut - число, с которым складывается по модулю 2 полученный результат
 *  @retval Возвращает рассчитанную контрольную сумму CRC8
 **************************************************************************************************
 */

uint8_t CRC8_Bytes_Calculate_software(uint8_t *Data, uint32_t Buffer_lenght, uint8_t InitVal, uint8_t Polynome, bool RefIn, bool RefOut, uint8_t XorOut) {
	uint8_t CRC8 = InitVal;
	while (Buffer_lenght--) {
		uint8_t Value = *Data++;

		if (RefIn) {
			uint8_t Reverse_byte = 0x00;
			for (uint8_t i = 0; i < 1; i++) {
				Reverse_byte = Reverse_byte | (uint16_t) Reverse_LSB_MSB_8_Bit(((uint8_t*) &Value + i));
			}
			Value = Reverse_byte;
		}

		uint8_t Processed_Data = *((uint8_t*) &Value);
		CRC8 ^= Processed_Data;
		for (uint8_t i = 0; i < 8; i++) {
			if (CRC8 & 0x80) {
				CRC8 = (CRC8 << 1u) ^ Polynome;
			} else {
				CRC8 = (CRC8 << 1u);
			}
		}

	}
	if (RefOut) {
		CRC8 = Reverse_LSB_MSB_8_Bit((uint8_t*) &CRC8);
	}
	CRC8 = CRC8 ^ XorOut;
	return CRC8;
}

/*
 **************************************************************************************************
 *  @breif Функция расчета контрольной суммы CRC16 с различными параметрами.
 *  @attention Функция работает с данными, которые представлены в 8-битном формате
 *  @param  *Data - данные, от которых будем вычислять контрольную сумму
 *  @param  Buffer_lenght - длинна данных в байтах. Т.е. 1 - это 1 байт.
 *  @param  InitVal - Начальное значение CRC16. Например 0xFFFF
 *  @param  Polynome - Полином. Например 0x8005
 *  @param  RefIn - флаг, указывающий на начало и направление вычислений,
 *          для обнаружения пакетов ошибок должно соответствовать порядку передачи в канале.
 *          Существует два варианта: False — начиная со старшего значащего бита (MSB-first)
 *          или True — с младшего (LSB-first)
 *  @param  RefOut - флаг, определяющий, инвертируется ли порядок битов регистра при входе на элемент XOR
 *  @param  XorOut - число, с которым складывается по модулю 2 полученный результат
 *  @retval Возвращает рассчитанную контрольную сумму CRC16
 **************************************************************************************************
 */

uint16_t CRC16_Bytes_Calculate_software(uint8_t *Data, uint32_t Buffer_lenght, uint16_t InitVal, uint16_t Polynome, bool RefIn, bool RefOut, uint16_t XorOut) {
	uint16_t CRC16 = InitVal;
	while (Buffer_lenght--) {
		uint8_t Value = *Data++;
		if (RefIn) {
			uint8_t Reverse_byte = 0x00;
			Reverse_byte = Reverse_LSB_MSB_8_Bit((uint8_t*) &Value);
			Value = Reverse_byte;
		}
		uint16_t Processed_Data = *((uint8_t*) &Value) << 8U;
		CRC16 ^= Processed_Data;
		for (uint8_t i = 0; i < 8; i++) {
			if (CRC16 & 0x8000) {
				CRC16 = (CRC16 << 1u) ^ Polynome;
			} else {
				CRC16 = (CRC16 << 1u);
			}
		}
	}
	if (RefOut) {
		CRC16 = Reverse_LSB_MSB_16_Bit((uint16_t*) &CRC16);
	}
	CRC16 = CRC16 ^ XorOut;
	return CRC16;
}

/*
 **************************************************************************************************
 *  @breif Функция расчета контрольной суммы CRC32 с различными параметрами.
 *  @attention Функция работает с данными, которые представлены в 8-битном формате
 *  @param  *Data - данные, от которых будем вычислять контрольную сумму
 *  @param  Buffer_lenght - длинна данных в байтах. Т.е. 1 - это 1 байт.
 *  @param  InitVal - Начальное значение CRC32. Например 0xFFFFFFFF
 *  @param  Polynome - Полином. Например 0x04C11DB7
 *  @param  RefIn - флаг, указывающий на начало и направление вычислений,
 *          для обнаружения пакетов ошибок должно соответствовать порядку передачи в канале.
 *          Существует два варианта: False — начиная со старшего значащего бита (MSB-first)
 *          или True — с младшего (LSB-first)
 *  @param  RefOut - флаг, определяющий, инвертируется ли порядок битов регистра при входе на элемент XOR
 *  @param  XorOut - число, с которым складывается по модулю 2 полученный результат
 *  @retval Возвращает рассчитанную контрольную сумму CRC32
 **************************************************************************************************
 */

uint32_t CRC32_Bytes_Calculate_software(uint8_t *Data, uint32_t Buffer_lenght, uint32_t InitVal, uint32_t Polynome, bool RefIn, bool RefOut, uint32_t XorOut) {
	uint32_t CRC32 = InitVal;
	while (Buffer_lenght--) {
		uint8_t Value = *Data++;
		if (RefIn) {
			uint8_t Reverse_byte = 0x00;
			Reverse_byte = Reverse_LSB_MSB_8_Bit((uint8_t*) &Value);
			Value = Reverse_byte;
		}
		uint32_t Processed_Data = *((uint8_t*) &Value) << 24U;
		CRC32 ^= Processed_Data;
		for (uint8_t i = 0; i < 8; i++) {
			if (CRC32 & 0x80000000) {
				CRC32 = (CRC32 << 1u) ^ Polynome;
			} else {
				CRC32 = (CRC32 << 1u);
			}
		}
	}
	if (RefOut) {
		CRC32 = Reverse_LSB_MSB_32_Bit((uint32_t*) &CRC32);
	}
	CRC32 = CRC32 ^ XorOut;
	return CRC32;
}

/*
 **************************************************************************************************
 *  @breif Функция расчета контрольной суммы CRC16 с различными параметрами
 *  @attention Функция работает с данными, которые представлены в 16-битном формате
 *  @param  *Data - данные, от которых будем вычислять контрольную сумму.
 *  @param  Buffer_lenght - длинна данных в 16 битах. Т.е. 1 - это 2 байта. 2 - это 4 байта и т.д.
 *  @param  InitVal - Начальное значение CRC16. Например 0xFFFF
 *  @param  Polynome - Полином. Например 0x8005
 *  @param  RefIn - флаг, указывающий на начало и направление вычислений,
 *          для обнаружения пакетов ошибок должно соответствовать порядку передачи в канале.
 *          Существует два варианта: False — начиная со старшего значащего бита (MSB-first)
 *          или True — с младшего (LSB-first)
 *  @param  RefOut - флаг, определяющий, инвертируется ли порядок битов регистра при входе на элемент XOR
 *  @param  XorOut - число, с которым складывается по модулю 2 полученный результат
 *  @retval Возвращает рассчитанную контрольную сумму CRC16
 **************************************************************************************************
 */

uint16_t CRC16_Calculate_software(uint16_t *Data, uint32_t Buffer_lenght, uint16_t InitVal, uint16_t Polynome, bool RefIn, bool RefOut, uint16_t XorOut) {
	uint16_t CRC16 = InitVal;
	while (Buffer_lenght--) {
		uint16_t Value = *Data++;

		if (RefIn) {
			uint16_t Reverse_byte = 0x0000;
			for (uint8_t i = 0; i < 2; i++) {
				Reverse_byte = Reverse_byte | (uint16_t) Reverse_LSB_MSB_8_Bit(((uint8_t*) &Value + i)) << (i * 8);
			}
			Value = Reverse_byte;
		}
		for (uint8_t i = 0; i < 2; i++) {
			uint16_t Processed_Data = *((uint8_t*) &Value + (1 - i)) << 8U;
			CRC16 ^= Processed_Data;
			for (uint8_t i = 0; i < 8; i++) {
				if (CRC16 & 0x8000) {
					CRC16 = (CRC16 << 1u) ^ Polynome;
				} else {
					CRC16 = (CRC16 << 1u);
				}
			}
		}
	}
	if (RefOut) {
		CRC16 = Reverse_LSB_MSB_16_Bit((uint16_t*) &CRC16);
	}
	CRC16 = CRC16 ^ XorOut;
	return CRC16;
}



/*
 **************************************************************************************************
 *  @breif Функция расчета контрольной суммы CRC32 с различными параметрами
 *  @attention Функция работает с данными, которые представлены в 32-битном формате
 *  @param  *Data - данные, от которых будем вычислять контрольную сумму.
 *  @param  Buffer_lenght - длинна данный в 32 битах. Т.е. 1 - это 4 байта. 2 - это 8 байт и т.д.
 *  @param  InitVal - Начальное значение CRC32. Например 0xFFFFFFFF
 *  @param  Polynome - Полином. Например 0x04C11DB7
 *  @param  RefIn - флаг, указывающий на начало и направление вычислений,
 *          для обнаружения пакетов ошибок должно соответствовать порядку передачи в канале.
 *          Существует два варианта: False — начиная со старшего значащего бита (MSB-first)
 *          или True — с младшего (LSB-first)
 *  @param  RefOut - флаг, определяющий, инвертируется ли порядок битов регистра при входе на элемент XOR
 *  @param  XorOut - число, с которым складывается по модулю 2 полученный результат
 *  @retval Возвращает рассчитанную контрольную сумму CRC32
 **************************************************************************************************
 */

uint32_t CRC32_Calculate_software(uint32_t *Data, uint32_t Buffer_lenght, uint32_t InitVal, uint32_t Polynome, bool RefIn, bool RefOut, uint32_t XorOut) {
	uint32_t CRC32 = InitVal;
	while (Buffer_lenght--) {
		uint32_t Value = *Data++;
		if (RefIn) {
			uint32_t Reverse_byte = 0x00000000;
			for (uint8_t i = 0; i < 4; i++) {
				Reverse_byte = Reverse_byte | (uint32_t) Reverse_LSB_MSB_8_Bit(((uint8_t*) &Value + i)) << (i * 8);
			}
			Value = Reverse_byte;
		}
		for (uint8_t i = 0; i < 4; i++) {
			uint32_t Processed_Data = *((uint8_t*) &Value + (3 - i)) << 24U;
			CRC32 ^= Processed_Data;
			for (uint8_t i = 0; i < 8; i++) {
				if (CRC32 & 0x80000000) {
					CRC32 = (CRC32 << 1u) ^ Polynome;
				} else {
					CRC32 = (CRC32 << 1u);
				}
			}
		}
	}
	if (RefOut) {
		CRC32 = Reverse_LSB_MSB_32_Bit((uint32_t*) &CRC32);
	}
	CRC32 = CRC32 ^ XorOut;
	return CRC32;
}


