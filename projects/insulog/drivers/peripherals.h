/*
 * peripherlas.h
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */

#ifndef PERIPHERALS_H_
#define PERIPHERLAS_H_

#include "hw_gpio.h"
typedef struct {
        HW_GPIO_PORT port;
        HW_GPIO_PIN pin;
        int8_t active_high;
} Pin_cfg;

extern  Pin_cfg PERIPH_SCREEN;
extern  Pin_cfg PERIPH_FLASH;



void reset_peripherals();
void drain_peripherals();

/**
 * Enables a peripheral on the spi bus
 */
int periph_enable(Pin_cfg *cs);
/**
 * disables a peripheral on the spi bus
 */
void periph_disable(Pin_cfg *cs);

void periph_toggle(Pin_cfg *cs);


void periph_setup();

#endif /* PERIPHERALS_H_ */
