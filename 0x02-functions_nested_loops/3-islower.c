#include"main.h"
/**
 * main - Entry point
 * Description: "program checks for lower case"
 * Return: always 0
 */
int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
