#include <stdio.h>
#include "main.h"

/**
 * _putchar - a functin that writes the character c to stdout.
 * @c:character to be printed.
 *
 * Return:1 success.
 *
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
