#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: integer
 * @argv: character array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int args;

	sum = 0;
	i = 0;

	for (i = 1; i < argc; i++)
	{
		args = atoi(argv[i]);
		sum = sum + args;
	}
	printf("%d\n", sum);

	return (0);
}
