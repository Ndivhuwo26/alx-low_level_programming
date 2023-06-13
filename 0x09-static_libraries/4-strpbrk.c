#include "main.h"
/**
 * _strpbrk -it is entry point
 * @s:an input
 * @accept:an input
 * Return:0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
		if (*s == accept[z])
		return (s);
		}
	s++;
	}

return ('\0');
}
