#include <unistd.h>


/**
 * _putchar - the character c is to written   to stdout
 *@c:is a  character to be printed
 *Return: 1 success
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

