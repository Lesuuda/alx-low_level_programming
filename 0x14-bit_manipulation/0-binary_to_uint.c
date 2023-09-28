#include "main.h"
/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to string containing  bits
 * Return: 0 ot total
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total;
	unsigned int power;
	int len;
	int i;

	total = 0;
	power = 1;
	len = strlen(b);

	if (b == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{

			total = total + power;
		}
		power *= 2;
	}
	return (total);
}
