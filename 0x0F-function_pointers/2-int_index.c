#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: array housing elements to search through
 * @size: size of array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if  (cmp(array[i]) == 0)
		{
			return (i);
		}
	}
}
