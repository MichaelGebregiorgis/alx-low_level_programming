#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: Data type
 *
 * @n: Data type
 *
 * Return: address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *element;
	dlistint_t *hd;

	element = malloc(sizeof(dlistint_t));
	if (!element)
	{
		return (NULL);
	}
	element->n = n;
	element->prev = NULL;
	hd = *head;

	if (hd)
	{
		while (hd->prev)
		{
			hd = hd->prev;
		}
	}
	element->next = hd;

	if (hd)
	{
		hd->prev = element;
	}
	*head = element;
	return (element);
}
