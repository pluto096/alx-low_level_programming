#include"main.h"
/**
 * main - checks for alphabetic character
 * @c: letter being tested
 * Return: Always 0
 */
int _isalpha(int c)
{
	for((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return(0);
}
