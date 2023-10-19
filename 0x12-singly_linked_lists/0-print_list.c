#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: Data type
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t val;

	val = 0;
	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		val++;
	}
	return (val);
}
