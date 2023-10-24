#include "lists.h"

/**
 * listint)len - prints all the elements of a listint_t list
 *
 * @a: Data type
 *
 * Return: node element
 */

size_t listint_len(const listint_t *h)
{
	size_t val = 0;

	while (a != NULL)
	{
		printf("%d\n", a->n);
		val++;
		a = a->next;
	}
	return (val);
}
