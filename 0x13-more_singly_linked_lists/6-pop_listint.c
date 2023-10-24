#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: Data type
 *
 * Return: deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	val = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (val);
}
