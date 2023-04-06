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
	return (prime_check(n, 2));
}

/**
 * prime_check - checks for a prime number
 * @i: intger
 * @n: integer
 * Return: 0 or 1
 */

int prime_check(int n, int i)
{
	if (n == i)
		return (1);
	if (i % n == 0)

		return (0);
	return (prime_check(n, i + 1));
}
