#include "main.h"
#include <unistd.h>

/**
 * _putchar -this function will write the character c to stdout
 * @c: The character to be printed
 *
 * Return: 1(success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
