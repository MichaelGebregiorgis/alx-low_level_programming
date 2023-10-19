#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: Data type
 *
 * @str: Data type
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nwnd, *tmp;
	size_t chars = 0;

	nwnd = malloc(sizeof(list_t));
	if (!nwnd)
	{
		return (NULL);
	}
	nwnd->str = strdup(str);

	while (str[chars])
		chars++;
	nwnd->len = chars;
	nwnd->next = NULL;
	tmp = *head;

	if(!tmp)
	{
		*head = nwnd;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nwnd;
	}
	return (*head);
}
