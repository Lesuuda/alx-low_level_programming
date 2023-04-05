#include "main.h"
/**
 * _sqrt_recursion - finds the squareroot of the natural number
 * @n: the number
 * Return: squarerrot of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot(n, 0));
}
/**
 * squareroot - new function that retutns the actual squareroot
 * @n: number to find sqrroot of
 * @i: iterator
 * Return: squareroot
 */
int squareroot(int i, int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squareroot(n, i + 1));
}
