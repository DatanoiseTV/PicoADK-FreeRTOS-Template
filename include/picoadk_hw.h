#ifndef __PICOADK_HW_H__
#define __PICOADK_HW_H__

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#include "hardware/spi.h"
#include "hardware/i2c.h"
#include "hardware/dma.h"
#include "hardware/pio.h"
#include "hardware/interp.h"
#include "hardware/timer.h"
#include "hardware/watchdog.h"
#include "hardware/clocks.h"
#include "hardware/vreg.h"
#include "bsp/board.h"

void picoadk_init();

#endif // __PICOADK_HW_H__