#include "main.h"

/**
 * set_bit -this function will sets a bit at a given index to 1
 * @n:the  pointer to the number to be  changed
 * @index:the index of the bit to be set to 1
 *
 * Return: 1 on success and  -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
