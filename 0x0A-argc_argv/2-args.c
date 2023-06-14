#include <stdio.h>
#include "main.h"

/**
 * main -a program that prints all arguments it receives
 * @argc:an  number of arguments
 * @argv:an  array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	printf("argc =%d\n", argc);

	for (k = 0; k < argc; k++)
	{
		printf("argc[%d] = %s\n", k, argv[k]);
	}

	return (0);
}
