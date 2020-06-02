/*
 * init.c
 *
 *  Created on: May 23, 2020
 *      Author: Eddie
 */

#include "registers.h"
#include "init.h"
#include <stdint.h>

void init(void){

	GPIO_DIRP1 |= (1 << 6U) | (1 << 7U);

}


void init_clk(void){
	//SYSCON_AHBCLKCTRL0 |= ()
}
