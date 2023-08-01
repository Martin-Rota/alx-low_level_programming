#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to head of list
 * Return: Number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count;

	node_count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
