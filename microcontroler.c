#include <microcontroller.h>
/**
* microcontroller: - size  of 16bits
* @WDTCL: - register port in the memory
* @WDPTW: - register port in the memory
* @PIDIR: - register port in the memory
* PIOUT: - register port in memory
**/

int a[5] = { 0xAAAA, 0x0000, 0xCCCC, 0x0000, 0xEEEE};
const int e[5] = { 0xABCD,0xDBCA,0xDDAA,0xEFAF, 0xFEAA};
int c[5];
int b[5];

void main()
{
	int d[5] = {0x0000,0x0000,0x0000,0x0000};
	static int e[5] = {0xABCD,0xDBCA,0xDDAA,0xEFAF, 0xFEAA};
	WDTCTL = WDPTW | WDPTWD;
	PIDR |= 0x01;
	volatile unsigned int i;
	int sum = 0;
	for (i = 0; i < 5; i++) 
	{
		sum += a[i] + b[i] + c[i] + d[i] + e[i];

	}
	while(i)
	{
		PIOUT^ = 0x01;
		for(i = sum; i > 0; i--)
	}

}