#include "main.h"
/**
 * get_bit - gets a bit at and index
 * @n: decimal number
 * @index: index
 * Return: index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (n >> index) & 1;
}
