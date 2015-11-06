#include "RNG.h"
#include "stm32f4xx_hal_rcc.h";

void enableRNG(){
	__HAL_RCC_RNG_CLK_ENABLE();
	RNG_reg->RNG_CR = 0x00000004;
}
