#ifndef RNG_H
#define RNG_H
#include <stdint.h>

typedef struct RNG_type RNG_t;
struct RNG_type{
	volatile uint32_t RNG_CR;
	volatile uint32_t RNG_SR;
	volatile uint32_t RNG_DR;
};

#define RNG_reg ((RNG_t*)0x50060800)

void enableRNG();
#endif // RNG_H
