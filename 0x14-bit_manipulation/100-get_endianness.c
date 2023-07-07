#include "main.h"

/**
 * get_endianness -this function will check if a machine is small or big endian
 * Return: 0 big and 1 for small
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
