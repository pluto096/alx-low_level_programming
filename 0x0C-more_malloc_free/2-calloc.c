#include<stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: Pointer to memory area s
 */
char _memset(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements in array
 * @size: size in bytes of each element in array
 *
 * Return: NULL if allocation failed and pointer
 * to allocated memory if successful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *clloc;


	clloc = malloc(size * nmemb);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (clloc == NULL)
		return (NULL);
	_memset(clloc, 0, nmemb * size);
	return (clloc);
}
