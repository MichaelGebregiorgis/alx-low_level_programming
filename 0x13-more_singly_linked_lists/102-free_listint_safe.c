#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: Data type
 *
 * Return: free list number
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dif;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
