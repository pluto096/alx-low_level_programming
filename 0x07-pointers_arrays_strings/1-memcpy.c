#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area to another
 * @src: sending memory
 * @dest: destination memory
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q] = src[q];
	}
	return (dest);
}
