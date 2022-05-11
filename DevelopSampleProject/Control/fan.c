/*
 * fan.c
 *
 *  Created on: 2014/05/20
 *      Author: cpptest
 */

#include "fan_control.h"

/* ƒtƒ@ƒ“‚Ì‰ñ“]”‚ğİ’è‚·‚é */
int fan_control(int base_rpm)
{
	int rpm;
	int temperature;

	temperature = read_temperature(); /* ‰·“x‚ğ“Ç‚İæ‚é */
	if (temperature < 50) {
		rpm = base_rpm;             /* 50–¢– ¨ 1”{ */
	} else if (temperature < 80) {
		rpm = base_rpm * 2;         /* 80–¢– ¨ 2”{ */
	} else {
		rpm = base_rpm * 4;         /* 80ˆÈã ¨ 4”{ */
	}

	set_fan_rpm(rpm);               /* ƒtƒ@ƒ“‚Ì‰ñ“]”‚ğİ’è */

	return rpm;
}
