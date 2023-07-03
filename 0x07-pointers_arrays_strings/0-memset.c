#include "main.h"

/**
 * @memset - fills first n bytes with constant b
 * Return: Character
 */
char *_memset(char *s, char b, unsigned int n)
{
	int q = 0;
	while(q <= n)
	{
		s[q] = b;
		q++;
	}
	return (*s);
}
