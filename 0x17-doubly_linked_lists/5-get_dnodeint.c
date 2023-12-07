#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 *
 * @index: Data type
 *
 * @head: Data type
 *
 * Return: nth place
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int inc = 0;

	if (!head)
	{
		return (NULL);
	}
	while (head->prev)
	{
		head = head->prev;
	}
	for (; head != NULL; inc++)
	{
		if (inc == index)
		{
			break;
		}
		head = head->next;
	}
	return (head);
}
