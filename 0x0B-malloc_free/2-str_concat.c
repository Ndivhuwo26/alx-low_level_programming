#include "main.h"
#include <stdlib.h>
/**
 * str_concat -this function will get ends of input and add together for size
 * @s1:An input one to concat
 * @s2:An input two to concat
 * Return:The concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = ci = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (j + ci + 1));

	if (conct == NULL)
		return (NULL);
	j = ci = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}

	while (s2[ci] != '\0')
	{
		conct[j] = s2[ci];
		j++, ci++;
	}
	conct[j] = '\0';
	return (conct);
}
