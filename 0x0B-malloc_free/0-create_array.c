#include "main.h"
#include <stdlib.h>
/**
 * create_array -a program that create array of size size and assign char c
 * @size:the  size of array
 * @c:this a char to assign
 * Description:it will create array of size size and assign char c
 * Return: str, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int l;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
		str[l] = c;
	return (str);
}
