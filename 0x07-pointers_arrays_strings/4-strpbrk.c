#include<stdio.h>
#include "main.h"

/**
 * _strpbrk - searches the string for any of set of bytes
 * @s: input
 * @accept: input
 * Return: pointer to s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if  (s[i] == accept[n])
				return (s + 1);
		}
	}
	return (NULL);
}

