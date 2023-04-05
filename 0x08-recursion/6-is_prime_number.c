#include "main.h"

/**
 * is_prime_number - checks if a number is prime or not
 * @n: entry number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (prime_check(n, n + 1));
}

/**
 * prime_check - checks for a prime number
 * @i: intger
 * @n: integer
 * Return: 0 or 1
 */

int prime_check(int i, int n)
{
	if (i == 1)
		return (1);
	if (i % n == 0)
		return (0);
	return (prime_check(i + 1, n));
}
