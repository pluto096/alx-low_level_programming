#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function to add node to a list
 * @head: pointing to the first element
 * @str: list
 *
 * Return: the address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
