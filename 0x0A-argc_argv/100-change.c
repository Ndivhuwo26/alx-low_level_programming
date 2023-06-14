#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  a program that prints the minimum number of coins
 * this will make change for a amount of money
 * @argc:the number of arguments
 * @argv:the  array of arguments
 *
 * Return: 0 Success and 1 Error
 */
int main(int argc, char *argv[])
{
	int num, g, result;
	int coins[] = {25,10,5,2,1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (g = 0; g < 5 && num >= 0; g++)
	{
		while (num >= coins[g])
		{
			result++;
			num -= coins[g];
		}
	}

	printf("%d\n", result);
	return (0);
}
