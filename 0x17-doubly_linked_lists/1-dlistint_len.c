#include "lists.h"

/**
 * dlistint_len -  returns the number of elements dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current)
	{
		current = current->next;
		node_count++;
	}

	return (node_count);
}
