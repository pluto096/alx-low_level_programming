#include"main.h"
/**
 * jack_bauer - print every minute
 * starting from 00:00 - 23:59
 */
void jack_bauer(void)
{
	int i;
	int j;
	int z = 0;
	for(i = 0; i <= 23; i++)
	{
		if(i < 10)
		{
			_putchar(z);
		}
		_putchar(i);
		_putchar(':');
		for(j = 0; j <= 59; j++)
		{
			if(j < 10)
			{
				_putchar(z);
			}
			_putchar(j);
		}
		_putchar('\n');
	}
}



