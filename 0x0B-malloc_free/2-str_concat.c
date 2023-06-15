#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int l, bi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = bi = 0;
	while (s1[l] != '\0')
		l++;
	while (s2[bi] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (l + bi + 1));

	if (conct == NULL)
		return (NULL);
	l = bi = 0;
	while (s1[l] != '\0')
	{
		conct[l] = s1[l];
		l++;
	}

	while (s2[bi] != '\0')
	{
		conct[l] = s2[bi];
		l++, bi++;
	}
	conct[l] = '\0';
	return (conct);
}
