#include <stdlib.h>
#include "main.h"

/**
 * *array_range -a program that creates an array of integers
 * @min:the  minimum range of values stored
 * @max:the  maximum range of values stored and number of elements
 *
 * Return:the pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		ptr[j] = min++;

	return (ptr);
}
