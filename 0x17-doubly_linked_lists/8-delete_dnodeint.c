#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index where the node should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
	dlistint_t *current, *node_to_delete;
	unsigned int count;

	current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0) {
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	count = 0;

	while (current != NULL && count != index - 1) {
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	node_to_delete = current->next;
	current->next = node_to_delete->next;

	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = current;

	free(node_to_delete);
	return (1);
}

