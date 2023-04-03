#include<stdio.h>
#include "main.h"
/**
 * _strchr - finds a character in a string
 * @s: string input
 * @c: string input
 * Return:&s[i]  or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}

