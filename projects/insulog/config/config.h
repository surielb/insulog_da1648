/*
 * config.h
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */

#ifndef CONFIG_CONFIG_H_
#define CONFIG_CONFIG_H_
#include "ad_spi.h"
typedef struct {
        HW_GPIO_PORT port;
        HW_GPIO_PIN pin;
} GPIO_t;


#define CFG_GPIO_SPI1_CLK_PORT          (HW_GPIO_PORT_3)
#define CFG_GPIO_SPI1_CLK_PIN           (HW_GPIO_PIN_7)
#define CFG_GPIO_SPI1_DI_PORT           (HW_GPIO_PORT_4)
#define CFG_GPIO_SPI1_DI_PIN            (HW_GPIO_PIN_0)
#define CFG_GPIO_SPI1_DO_PORT           (HW_GPIO_PORT_4)
#define CFG_GPIO_SPI1_DO_PIN            (HW_GPIO_PIN_1)

#define CFG_GPIO_SPI1_FLASH_CS_PORT           (HW_GPIO_PORT_3)
#define CFG_GPIO_SPI1_FLASH_CS_PIN            (HW_GPIO_PIN_6)

#define CFG_GPIO_SPI1_DISPLAY_CS_PORT           (HW_GPIO_PORT_4)
#define CFG_GPIO_SPI1_DISPLAY_CS_PIN            (HW_GPIO_PIN_6)




#ifdef PERIPH_18_ENABLE
#define CFG_GPIO_PERIPH_POWER_PORT              HW_GPIO_PORT_3
#define CFG_GPIO_PERIPH_POWER_PIN               HW_GPIO_PIN_0
#endif

#define SPI_LOGIC_CUT
#ifdef SPI_LOGIC_CUT

#define CFG_GPIO_SPI_LOGIC_PORT              HW_GPIO_PORT_3
#define CFG_GPIO_SPI_LOGIC_PIN               HW_GPIO_PIN_0
#endif


#define CFG_GPIO_DISPLAY_POWER_PORT             HW_GPIO_PORT_3
#define CFG_GPIO_DISPLAY_POWER_PIN              HW_GPIO_PIN_5

#define CFG_GPIO_DISPLAY_BS0_PORT               HW_GPIO_PORT_4
#define CFG_GPIO_DISPLAY_BS0_PIN                HW_GPIO_PIN_5


#define CFG_GPIO_DISPLAY_DNC_PORT                HW_GPIO_PORT_4
#define CFG_GPIO_DISPLAY_DNC_PIN                 HW_GPIO_PIN_4


#define CFG_GPIO_DISPLAY_RST_PORT               HW_GPIO_PORT_4
#define CFG_GPIO_DISPLAY_RST_PIN                 HW_GPIO_PIN_3


#define CFG_GPIO_FAKE_FLASH_CS_PORT               HW_GPIO_PORT_4
#define CFG_GPIO_FAKE_FLASH_CS_PIN                HW_GPIO_PIN_2





/*


*/
spi_device hspi_x;

spi_device spi_flash;
spi_device spi_display;


#endif /* CONFIG_CONFIG_H_ */
