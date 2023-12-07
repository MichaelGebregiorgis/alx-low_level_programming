#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @n: Data type
 *
 * @head: Data type
 *
 * Return: address new
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd;
	dlistint_t *element;

	element = malloc(sizeof(dlistint_t));
	if (!element)
	{
		return (NULL);
	}
	element->n = n;
	element->next = NULL;
	hd = *head;

	if (h)
	{
		while (hd->next)
		{
			hd = hd->next;
		}
		hd->next = element;
	}
	else
	{
		*head = element;
	}
	element->prev = hd;

	return (new);
}
