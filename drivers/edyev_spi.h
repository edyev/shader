/*
 * edyev_spi.h
 *
 *  Created on: May 25, 2020
 *      Author: Eddie
 */

#ifndef EDYEV_SPI_H_
#define EDYEV_SPI_H_

#define SYSCON_HSLSPI_CLK_EN (1 << 28U)
#define SYSCON_FC7_CLK_EN (1 << 18u)
#define SYSCON_HSLSPICLKSEL_MAIN (0u)
#define SYSCON_HSLSPICLKSEL_PLL (1u)
#define SYSCON_HSLSPICLKSEL_FRO_12M (2u)
#define SYSCON_HSLSPICLKSEL_FRO_96M (3u)
#define SYSCON_HSLSPICLKSEL_FRO_1M (4u)
#define SYSCON_HSLSPICLKSEL_NOCLK (5u)
#define SYSCON_HSLSPICLKSEL_OSC_32K (6u)
#define SYSCON_FROHFDIV_DIV_2 (1U)
#define SYSCON_FROHFDIV_HALT (1 << 30u)

#define FLEXCOMM_PSELID_PERSEL_NO	(0U)
#define FLEXCOMM_PSELID_PERSEL_SPI	(2U)



void spi_init(void);

#endif /* EDYEV_SPI_H_ */
