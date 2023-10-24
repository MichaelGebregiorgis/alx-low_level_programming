#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 *
 * @head: Data type
 *
 * Return: first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;

	return (*head);
}
