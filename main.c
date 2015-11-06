#include "stm32f4xx.h"
#include "RNG.h"

void main(){
	int randomNo;
	enableRNG();
	while(1){
		randomNo = RNG_reg->RNG_DR;
	}


}
