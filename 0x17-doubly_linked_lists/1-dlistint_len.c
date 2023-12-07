#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: Data type
 *
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
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
		cnt++;
		h = h->next;
	}
	return (cnt);
}
