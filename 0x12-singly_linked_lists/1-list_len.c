#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: Data type
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t val;

	val = 0;
	while (h != NULL)
	{
		val++;
		h = h->next;
	}
	return (val);
}
