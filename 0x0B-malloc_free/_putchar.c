#include "main.h"
#include <unistd.h>

/**
 * _putchar -a program that writes the character c to stdout
 * @c: is  The character to be printed
 *
 * Return: 1
 * On error,if  -1 is returned and errno is to be set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
