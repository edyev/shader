
/*
 * registers.c
 *
 *  Created on: May 23, 2020
 *      Author: Eddie
 */

#ifndef REGISTERS_C_
#define REGISTERS_C_

#include <stdint.h>

#define __lpc_reg(x) 			(*((uint32_t*)(x)))
/*-----------------------------[ GPIO ]--------------------------------*/
#define __gpio_offset			0x4008c000
#define __gpio_reg(x)			__lpc_reg((__gpio_offset + x))

#define GPIO_DIRP1 				__gpio_reg(0x2004)
#define GPIO_NOTP1 				__gpio_reg(0x2304)

/*-----------------------------[ SYSCON ]--------------------------------*/

#define __syscon_offset			0x40000000
#define __syscon_reg(x)			__lpc_reg((__syscon_offset + x))

#define SYSCON_AHBCLKCTRL0 		__syscon_reg(0x200)
#define SYSCON_AHBCLKCTRL1 		__syscon_reg(0x204)
#define SYSCON_AHBCLKCTRL2 		__syscon_reg(0x208)
#define SYSCON_HSLSPICLKSEL 	__syscon_reg(0x2D0)
#define SYSCON_FROHFDIV			__syscon_reg(0x388)

/*-----------------------------[ FLEXCOMM ]--------------------------------*/

#define __flexcomm8_offset			0x4009F000
#define __flexcomm8_reg(x)			__lpc_reg((__flexcomm8_offset + x))

#define FLEXCOMM8_PSELID			__flexcomm8_reg(0xFF8)
/*-----------------------------[ SPI ]--------------------------------*/



#endif /* REGISTERS_C_ */
