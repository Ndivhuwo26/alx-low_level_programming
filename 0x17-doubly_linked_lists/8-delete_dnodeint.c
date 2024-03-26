#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to delete (starting from 0)
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *current = *head;

    if (*head == NULL)
        return -1;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
        return -1;

    current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;
    free(current);

    return 1;
}
