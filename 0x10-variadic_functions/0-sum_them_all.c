#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -it will Return the sum of all its paramters.
 * @n:A number of paramters passed to the function.
 * @...: The variable number of paramters to calculate the sum of.
 *
 * Return: n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, sum = 0;

	va_list ap;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
