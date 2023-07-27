#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to get length of a list
 * @h: list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			num_elem++;

		h = h->next;
	}

	return (num_elem);
}
