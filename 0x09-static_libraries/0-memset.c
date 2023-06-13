#include "main.h"

/**
 * _memset-a memory address to be filled  with a specific value
 *@s: this is a start address of memory to be filled
 *@b: the value desired
 *@n:is the number of bytes will be changed
 *Return: array with changed new value for a bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
