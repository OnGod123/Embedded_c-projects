#include <REGX51.h>
#define STREET_LIGHT P2
sbit light_sensor = P1 ^ 0;

void main()
{

	while (1)
	{
		if (light_sensor == 0)
		{
			STREET_LIGHT = 0xFF;
		}
		else
		{
			STREET_LIGHTS = 0x00;
		}
	}

}