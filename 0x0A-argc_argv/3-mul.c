#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: string arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int result;
	int x;

	result = 1;


	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], NULL, 10);
		result = result * x;
	}
	printf("%d\n", result);
	
	if (i == 0)
		printf("Error\n");
	return (1);

	return (0);
}

