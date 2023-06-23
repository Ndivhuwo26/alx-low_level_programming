#include <stdlib.h>
/**
 * argstostr -the main entry
 * @ac:the int input
 * @av:the double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, n, r = 0,  a = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (n = 0; av[j][n]; n++)
			a++;
	}
	a += ac;

	str = malloc(sizeof(char) * a + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (n = 0; av[j][n]; n++)
	{
		str[r] = av[j][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

