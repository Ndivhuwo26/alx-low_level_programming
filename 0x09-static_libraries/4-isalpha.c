#include "main.h"

/**
 * _isalpha -it will checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'z' && c <= 'a') || (c >= 'Z' && c <= 'A'));
}
