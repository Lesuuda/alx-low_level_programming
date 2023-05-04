#include "main.h"
/**
 * get_endianness - gets endianess
 * Return: pointer to integer
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *pointer = (char *) &num;

	return ((int) *pointer);
}
