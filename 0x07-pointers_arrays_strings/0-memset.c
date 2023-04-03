#include "main.h"
/**
 * _memset - this is the entry point
 * @n: Number of byte of memory
 * @s: pointer to te memory
 * @b: the  costant bytes
 * Return: s, a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{	
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
