#include "lists.h"

/**
 * sum_dlistint - Returns the sum of data n of a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	unsigned int sum;

	current = head;
	sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
