#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n - integer data stored in the n field
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
