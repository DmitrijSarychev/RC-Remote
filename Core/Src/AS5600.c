/*
 * AS5600.c
 *
 *  Created on: Dec 5, 2024
 *      Author: Regular Dildo
 */

#include "AS5600.h"
#include "i2c.h"


uint16_t AS5600_raw_angle_get(uint8_t dev_add)
{
	uint8_t data[2];
	uint16_t angle = 0;
	HAL_I2C_Mem_Read(&hi2c1, dev_add, 0x0C, 1, data, 2, 100);

	angle = (data[0] << 8) + data[1];

	return angle;
}
