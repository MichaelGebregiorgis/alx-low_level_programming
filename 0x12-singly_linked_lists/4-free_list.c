#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head: Data type
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
