#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns thr sum of two numbers
 * @a: first integer
 * @b: second integer
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: first integer
 * @b: second integer
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the pdt of two numbers
 * @a: first integer
 * @b: second integer
 * Return: a * b
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two numbers
 * @a: first integer
 * @b: second integer
 * Return: a / b
 */



int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - returns the remainder of the division of two numbers
 * @a: first integer
 * @b: second integer
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
