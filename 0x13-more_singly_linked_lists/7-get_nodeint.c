#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of listint_t list.
 * @head: Pointer to head of list.
 * @index: Index of node, starting at 0.
 *
 * Return: Pointer to nth node, or NULL if node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}

	return (NULL);
}
