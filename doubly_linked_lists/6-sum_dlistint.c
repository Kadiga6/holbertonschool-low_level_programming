#include"lists.h"

/**
 * sum_dlistint - Computes the sum of all the data (n).
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Sum of all the data (n) in the list. Returns 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
