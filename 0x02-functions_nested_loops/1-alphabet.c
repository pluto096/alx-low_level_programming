#include"main.h"
/**
 * main - Entry point
 * Description: "print all alphabets"
 * Return: always 0
 */
void print_alphabet(void)
{
	int x;
	for(x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
