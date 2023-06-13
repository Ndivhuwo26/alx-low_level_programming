#include "main.h"

/**
 * _islower -a function that checks for lowercase character
 * @c:it is  the character to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'z' && c <= 'a');
}
