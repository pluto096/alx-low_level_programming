#include"main.h"
/**
 * main - Entry point
 * Description: "10x alphabet"
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;
	for(y = 0; y < 10; y++)
	{
		for(x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
