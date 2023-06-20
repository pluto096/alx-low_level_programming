#include"main.h"
/**
 * jack_bauer - print every minute
 * starting from 00:00 - 23:59
 */
void jack_bauer(void)
{
	int i;
	int j;
	j = 0;
	i = 0;
	int z = 0;
	while(i <= 23)
	{
		if(i < 10)
		{
			_putchar(z);
		}
		_putchar(i);
		_putchar(':');
		for(j >= 0;j <= 59; j++)
		{
			if(j < 10)
			{
				_putchar(z);
			}
			_putchar(j);
		}
		i++
		_putchar('\n');
	}
}



