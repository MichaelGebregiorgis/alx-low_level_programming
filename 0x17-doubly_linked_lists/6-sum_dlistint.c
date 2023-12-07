#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 *
 * @head: Data type
 *
 * Return: data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int val = 0;

	if (head)
	{
		while (head->prev)
		{
			head = head->prev;
		}
		while (head)
		{
			val += head->n;
			head = head->next;
		}
	}
	return (val);
}
