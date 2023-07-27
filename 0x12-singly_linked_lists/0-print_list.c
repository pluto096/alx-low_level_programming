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

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
