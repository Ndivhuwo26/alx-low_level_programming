#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: Data to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
        return NULL;

    newNode->n = n;
    newNode->prev = NULL;

    if (*head != NULL)
    {
        newNode->next = *head;
        (*head)->prev = newNode;
    }
    else
    {
        newNode->next = NULL;
    }

    *head = newNode;
    return newNode;
}
