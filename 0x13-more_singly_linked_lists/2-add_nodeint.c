#include "lists.h"

/**
 * add_nodeint -this function will add a new node at the head of a linked list
 * @head:this points to the first node in the list
 * @n:The data to be inserted in that new node
 *
 * Return:the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	(*new).n = n;
	(*new).next = *head;
	*head = new;

	return (new);
}
