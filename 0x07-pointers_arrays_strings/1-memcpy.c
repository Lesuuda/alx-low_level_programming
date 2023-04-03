#include "main.h"
/**
 * _memcpy - function that copies data from one location to another
 * @n: number of bytes
 * @src: the source location
 * @dest: the destination location
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

