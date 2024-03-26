#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Data for the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *newNode, *temp = *h;
    unsigned int i = 0;

    if (idx == 0)
        return add_dnodeint(h, n);

    while (temp != NULL && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || i != idx - 1)
        return NULL;

    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
        return NULL;

    newNode->n = n;
    newNode->prev = temp;
    newNode->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = newNode;
    temp->next = newNode;

    return newNode;
}
