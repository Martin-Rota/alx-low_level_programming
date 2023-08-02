#include "lists.h"

/**
 * pop_listint - Deletes head node of listint_t list.
 * @head: Double pointer to head of list.
 *
 * Return: Head node's data (n), or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (head != NULL && *head != NULL)
	{
		tmp = *head;
		data = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}

	return (data);
}
