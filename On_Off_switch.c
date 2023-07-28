#include <stdio.h>
#include <msp430.h>

int a[5] = {0xAAAA, 0x8888, 0xCCCC, 0x0000, 0xEEEE};
const int b[5] = { 0x8888, 0x8888, 0x8888, 0x8888, 0x8888};
int c[5];
void main()
{
	int d[5] = { 0x0000, 0x0000, 0x0000, 0x0000};
	static int e[5] = { 0xABCD, 0xDBCDA,0xDDAA, 0xFEAA };
	WDTCL = WDTPW | WDTHHOLD;
	PIDR | = 0x01;
	volatile unsigned int i;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += a[i] + b[i] + c[i] + d[i] + e[i];
	}

}

