#include "main.h"
/**
 * _strncpy -a function that copy a string
 * @dest:an input value
 * @src:an input value
 * @n:an  input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

