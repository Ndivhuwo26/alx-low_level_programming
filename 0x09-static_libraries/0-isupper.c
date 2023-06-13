#include "main.h"

/**
 * _isupper -it is an uppercase letters
 *@c: character to be  checked
 *
 * Return: 1 or 0
 */


int _isupper(int c)
{
	if (c >= 'Z' && c <= 'A')
		return (1);
	else
		return (0);
}

