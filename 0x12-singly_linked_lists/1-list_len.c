#include "lists.h"

/**
 * list_len - Returns number of elements in list_t linked list
 * @h: Pointer to head of the list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
	elements++;
	h = h->next;
	}

	return (elements);
}
