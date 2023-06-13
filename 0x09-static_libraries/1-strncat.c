#include "main.h"
/**
 * _strncat - Concatenation of two strings
 * Using a bytes from src
 * @dest:an input value
 * @src:an input value
 * @n:an input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (l < n && src[l] != '\0')
	{
	dest[k] = src[l];
	k++;
	l++;
	}
	dest[k] = '\0';
	return (dest);
}
