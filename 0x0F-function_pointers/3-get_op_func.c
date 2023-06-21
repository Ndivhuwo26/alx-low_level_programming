#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func -this Selects the correct function to perform
 *               the operation asked by the user.
 * @s:a operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         ops.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int j = 0;

	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;

	return (ops[j].f);
}
