#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 *
 * @head: Data type
 *
 * @index: Data type
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int inc;
	listint_t *tmp = head;

	inc = 0;
	while (tmp && inc < index)
	{
		tmp = tmp->next;
		inc++;
	}
	return (tmp ? tmp : NULL);
}
