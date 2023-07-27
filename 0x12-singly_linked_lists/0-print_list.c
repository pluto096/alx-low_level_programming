#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print elements of a list
 * @h: list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}
