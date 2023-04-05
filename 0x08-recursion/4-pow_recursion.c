#include "main.h"

/**
 * _pow_recursion - gives the power of an integer raised to another
 * @x: integer
 * @y: integer
 * Return: 0 or -1
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
