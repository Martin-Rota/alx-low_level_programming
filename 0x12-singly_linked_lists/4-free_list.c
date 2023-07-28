#include "lists.h"

/**
 * free_list - Frees list_t list
 * @head: Pointer to head of list
 */
void free_list(list_t *head)
{
    list_t *current, *next;

    current = head;
    while (current != NULL)
    {
        next = current->next;
        free(current->str);
        free(current);
        current = next;
    }
}
