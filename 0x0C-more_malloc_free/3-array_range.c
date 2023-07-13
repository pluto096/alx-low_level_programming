#include<stdlib.h>
#include "main.h"

/**
 * array_range - creates array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: NULL if malloc or min > max
 * and pointer to new array if malloc succedes
 */
int *array_range(int min, int max)
{
	int i, *array, len = 0, j = 0;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		len++;
	}

	array = malloc(sizeof(int) * len);

	for (i = min; i <= max; i++)
	{
		array[j++] = i;
	}

	return (array);
}


