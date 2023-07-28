#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: list_t list
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
