#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -a function that Print numbers and followed by a new line.
 * @separator:a string to be printed between numbers.
 * @n: A number of integers passed to the function.
 * @...: The variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
