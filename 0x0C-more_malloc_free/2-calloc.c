#include <stdlib.h>
#include "main.h"

/**
 * *_memset -a program that fills memory with a constant byte
 * @s:the memory address to be filled
 * @b:a char to copy
 * @n:the  number of times to copy b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
/**
 * *_calloc -a program that allocates memory for an array
 * @nmemb:the number of elements in the array
 * @size:the  size of each element
 *
 * Return:the pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
