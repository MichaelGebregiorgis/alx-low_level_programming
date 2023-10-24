#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: Data type
 *
 * @n: Data type
 *
 * Return: new node pointer at the end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *val;
	listint_t *tmp = *head;

	val = malloc(sizeof(listint_t));
	if (val == NULL)
	{
		return (NULL);
	}
	val->n = n;
	val->next = NULL;

	if (*head == NULL)
	{
		*head = val;
		return (val);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = val;
	return (val);
}
