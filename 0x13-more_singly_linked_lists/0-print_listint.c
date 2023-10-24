#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: Data type
 *
 * Return: node element
 */

size_t print_listint(const listint_t *h)
{
	size_t val = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		val++;
		h = h->next;
	}
	return (val);
}
