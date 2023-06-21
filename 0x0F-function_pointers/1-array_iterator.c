#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - A function prints each array elem on a newl
 * @array:an array
 * @size:it is how many elem to print
 * @action:the  pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
