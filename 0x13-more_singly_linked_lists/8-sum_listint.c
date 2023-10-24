#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: Data type
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp = head;

	sum = 0;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
