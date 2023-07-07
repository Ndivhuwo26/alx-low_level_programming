#include "main.h"

/**
 * get_bit -this will returns the value of  bit at an index in a decimal number
 * @n:the  number to be searched
 * @index:the  index of the bit
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
