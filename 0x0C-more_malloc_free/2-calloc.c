#include<string.h>
#include<stdlib.h>
#include "main.h"

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
	memset(clloc, 0, nmemb * size);
	return (clloc);
}
