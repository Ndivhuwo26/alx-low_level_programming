#include "lists.h"

/**
 * pop_listint -this function will delete the head node of a linked list
 * @head:a pointer to the head element in the linked list
 *
 * Return: data inside the elements that was deleted,
 * or 0 if  empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)-> n;
	temp = (*head)-> next;
	free(*head);
	*head = temp;

	return (num);
}
