#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: Data type
 *
 * Return: node number
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt = 0;

	if (!h)
	{
		return (cnt);
	}
	while (h->prev)
	{
		h = h->prev;
	}
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (cnt);
}
