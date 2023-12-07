#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: Data type
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
	{
		while (head->prev)
		{
			head = head->prev;
		}
	}
	while ((temp = head))
	{
		head = head->next;
		free(temp);
	}
}
