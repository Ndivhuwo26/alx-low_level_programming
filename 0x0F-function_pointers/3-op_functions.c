#include "3-calc.h"

int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);



/**
 * op_add -will  Return a sum of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return:a sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -this Return a difference of two numbers.
 * @a: a first number.
 * @b:a second number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -will  Return a product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -will Return the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return:a  quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -this will Return the remainder of the division of two numbers.
 * @a: A first number.
 * @b: A second number.
 *
 * Return:A remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
