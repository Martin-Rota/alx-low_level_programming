#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	dlistint_t *current;
	current	= head;

	while (current != NULL)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
}
