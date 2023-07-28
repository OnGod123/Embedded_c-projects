#include <reg51.h>
sbit red = P1 ^ 0;
sbit yellow = p1 ^ 1;
sbit green = P1 ^ 2;
//signal connection declaration
void main()
{
	unsigned int i;
	red = yellow = green = 0;
	while (1)
	{
		red = 1;
		for (i = 0; i < 60000; i++)
		{
			red = 0;
		}
		yellow = 1;
		for (i = 0; i < 30000; i++)
		{
			yellow = 0;
		}
		green = 1;
		for (i = 0; i < 60000; i++)
		{
			green = 0;
		}
	}

}