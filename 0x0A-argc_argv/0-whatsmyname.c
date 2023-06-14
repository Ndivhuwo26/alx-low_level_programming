#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the name of the program
 * @argc:a number of arguments
 * @argv: an array of arguments
 *
 * Return:0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
