#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: Data type
 *
 * Return: node elements
 */

size_t listint_len(const listint_t *h)
{
	size_int val;

	val = 0;
	while (h != NULL)
	{
		val++;
		h = h->next;
	}
	return (val);
}
