#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenating of bytes and a string to another string
 * @s1:the  string to append to
 * @s2:the  string to concatenate from
 * @n:the  number of bytes from s2 to concatenate to s1
 *
 * Return:a pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l = 0, x = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (l < len1)
	{
		s[l] = s1[l];
		l++;
	}

	while (n < len2 && l < (len1 + n))
		s[l++] = s2[x++];

	while (n >= len2 && l < (len1 + len2))
		s[l++] = s2[x++];

	s[l] = '\0';

	return (s);
}
