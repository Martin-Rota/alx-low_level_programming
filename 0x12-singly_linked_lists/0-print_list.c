#include "lists.h"

/**
 * print_list - Prints all elements of list_t list
 * @h: Pointer to head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	nodes++;
	h = h->next;
	}

	return (nodes);
}
