#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked(unsigned int b) - function that allocates memory
 * @b: size of memory to allocate
 *
 * Return: Void has no return
 */
void *malloc_checked(unsigned int b)
{
	void* mem = malloc(b);

	if(mem == NULL)
	{
		exit(98);
	}
	else
	{
		return(mem);
	}
}
