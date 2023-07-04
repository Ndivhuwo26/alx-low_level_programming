#include "lists.h"

/**
 * listint_len -This function will return number of elements in a linked lists
 * @h:this is linked list of type listint_t to traverse
 *
 * Return: num
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = (*h).next;
	}

	return (num);
}
