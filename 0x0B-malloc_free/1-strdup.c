#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -a program that duplicate to new memory space location
 * @str: is a char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int j, b = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	aaa = malloc(sizeof(char) * (j + 1));

	if (aaa == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		aaa[b] = str[b];

	return (aaa);
}
