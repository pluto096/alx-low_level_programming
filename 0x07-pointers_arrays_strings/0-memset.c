#include "main.h"

/**
 * *_memset - Fills n bytes pointed to by s with b
 * @s: string pointed
 * @b: constant filler
 * @n: number of bytes to be filled
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q = 0;

	while (q < n)
	{
		s[q] = b;
		q++;
	}
	return (s);
}
