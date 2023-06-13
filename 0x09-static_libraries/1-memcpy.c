#include "main.h"
/**
 *_memcpy - a program that copies memory address
 *@dest:address where memory is stored
 *@src: address where memory is copied
 *@n:a number of bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (; j < k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
