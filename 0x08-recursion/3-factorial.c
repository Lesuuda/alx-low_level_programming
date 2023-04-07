#include "main.h"
/**
 * factorial - gives the factorial of a number
 * @n: integer
 * Return: -1 or n * facttorial(n-1)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
