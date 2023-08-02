#include "lists.h"

/**
 * sum_listint - Returns sum of all data (n) of a listint_t list.
 * @head: Pointer to head of list.
 *
 * Return: Sum of all the data (n) or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
