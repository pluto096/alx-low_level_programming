#include<stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: point to old memory address
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer to new memory or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newmem;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newmem = malloc(new_size);
		return (newmem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newmem = malloc(new_size);
	if (newmem == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		for (i = 0; i <= new_size; i++)
		{
			newmem[i] = ptr[i];
		}
	}
	if (new_size > old_size)
	{
		for (i =0; i <= old_size; i++)
		{
			newmem[i] = ptr[i]
		}
	}
	free(ptr);
	return (newmem);
}
