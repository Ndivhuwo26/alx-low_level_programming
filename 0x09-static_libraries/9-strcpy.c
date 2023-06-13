#include "main.h"

/**
 * char *_strcpy - a program that copies the string pointed to by src
 * @dest:it copy to
 * @src:it copy from
 * Return:dest
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int z = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; z < k ; z++)
	{
		dest[z] = src[z];
	}
	dest[k] = '\0';
	return (dest);
}
