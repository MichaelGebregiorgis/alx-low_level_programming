#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: Data type
 *
 * @str: Data type
 *
 * Return: new node element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nwnd;
	unsigned int inc = 0;

	while (str[inc])
	{
		inc++;
	}
	nwnd = malloc(sizeof(list_t));
	if (nwnd == NULL)
	{
		return (NULL);
	}

	nwnd->str = strdup(str);
	nwnd->len = inc;
	nwnd->next = (*head);
	(*head) = nwnd;

	return (*head);
}
