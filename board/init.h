/*
 * init.h
 *
 *  Created on: May 23, 2020
 *      Author: Eddie
 */

#ifndef INIT_H_
#define INIT_H_

#define IOCON_MODE(x) (x << 4U)

#define IOCON_MODE_INACTIVE 	IOCON_MODE(0U)
#define IOCON_MODE_PD 			IOCON_MODE(1U)
#define IOCON_MODE_PU 			IOCON_MODE(2U)
#define IOCON_MODE_REPEATER 	IOCON_MODE(3U)

#define IOCON_SLEW_EN			IOCON_MODE(1 << 6U)


void init(void);
void init_clk(void);
#endif /* INIT_H_ */
