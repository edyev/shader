/*
 * edyev_spi.c
 *
 *  Created on: May 25, 2020
 *      Author: Eddie
 */
#include "registers.h"
#include "edyev_spi.h"

void spi_init(void){


	SYSCON_FROHFDIV |= SYSCON_FROHFDIV_DIV_2;
	SYSCON_FROHFDIV &= ~SYSCON_FROHFDIV_HALT;
	SYSCON_AHBCLKCTRL2 |= SYSCON_HSLSPI_CLK_EN;
	SYSCON_HSLSPICLKSEL = SYSCON_HSLSPICLKSEL_FRO_96M; //ACTUALLY 48M
	FLEXCOMM8_PSELID = FLEXCOMM_PSELID_PERSEL_SPI;

}



