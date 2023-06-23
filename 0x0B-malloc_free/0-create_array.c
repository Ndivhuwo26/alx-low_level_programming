#include "main.h"
#include <stdlib.h>
/**
 * create_array -this create array of size size and assign char c
 * @size:the size of array
 * @c:the char to assign
 * Description:this create array of size size and assign char c
 * Return:a pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
