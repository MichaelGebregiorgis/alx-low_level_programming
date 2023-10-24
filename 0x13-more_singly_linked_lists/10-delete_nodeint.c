#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 *
 * @head: Data type
 *
 * @index: Data type
 *
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *crnt = NULL;
	unsigned int inc;

	inc = 0;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (inc < index - 1)
	{
		if (!tmp || !(tmp->next))
		{
			return (-1);
		}
		tmp = tmp->next;
		inc++;
	}
	crnt = tmp->next;
	tmp->next = crnt->next;
	free(crnt);

	return (1);
}
