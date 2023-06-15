#include "main.h"
#include <stdlib.h>
/**
 * argstostr -this is the  main entry
 * @ac:it is the int input
 * @av:it will double pointer array
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int f, m, q = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (f = 0; f < ac; f++)
	{
		for (m = 0; av[f][m]; m++)
			j++;
	}
	j += ac;

	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	for (f = 0; f < ac; f++)
	{
	for (m = 0; av[f][m]; m++)
	{
		str[q] = av[f][m];
		q++;
	}
	if (str[q] == '\0')
	{
		str[q++] = '\n';
	}
	}
	return (str);
}
