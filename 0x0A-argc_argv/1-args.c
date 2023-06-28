#include <stdio.h>
#include "main.h"

/**
 * main - a function that print the number of arguments passed to the program
 * @argc:an number of arguments
 * @argv: an array of arguments
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

