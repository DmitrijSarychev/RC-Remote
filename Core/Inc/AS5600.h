/*
 * AS5600.h
 *
 *  Created on: Dec 5, 2024
 *      Author: Regular Dildo
 */

#ifndef INC_AS5600_H_
#define INC_AS5600_H_
#include "main.h"

#define ENC_I2C_ADD 0x6C

uint16_t AS5600_raw_angle_get(uint8_t dev_add);


#endif /* INC_AS5600_H_ */
