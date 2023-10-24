#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: Data type
 *
 * Return: new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmpN = NULL;
	const listint_t *l_n = NULL;
	size_t cntr = 0;
	size_t newNode;

	tmpN = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmpN, tmpN->n);
		cntr++;
		tmpN = tmpN->next;
		l_n = head;
		newNode = 0;
		while (newNode < cntr)
		{
			if (tmpN == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmpN, tmpN->n);
				return (cntr);
			}
			l_n = l_n->next;
			newNode++;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (cntr);
}
