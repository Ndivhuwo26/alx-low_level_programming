#include "main.h"

/**
 * flip_bits -it will counts the number of bits to be changed
 * will get from one number to another
 * @n:The first number
 * @m:The second number
 *
 * Return:the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;

	unsigned long int current;

	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
