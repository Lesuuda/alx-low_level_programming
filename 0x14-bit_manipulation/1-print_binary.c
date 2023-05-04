#include "main.h"
/**
 * print_binary  -prints the binary value of adecimal value
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	int var;
	int i;

	for (i = n; i >= 0; i--)
	{
		var = n >> i;
		if (var & 1)
		{
			_putchar('1');
		}
	
		else
			_putchar('0');

	}
	_putchar('\n');


}
