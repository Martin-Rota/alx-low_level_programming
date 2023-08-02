#include "lists.h"

/**
 * free_listint2 - Frees listint_t list and sets head to NULL.
 * @head: Double pointer to head of list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
