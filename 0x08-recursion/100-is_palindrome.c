#include "main.h"
#include <string.h>


/**
 * is_palindrome - checks for a palidrome
 * @s: test string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
		return (1);
	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - actual check of palindrome
 * @s: test string
 * @left: the first index of the string
 * @right: the last index of the string
 * Return: 0 or 1
 */

int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	else if (s[left] == s[right])
		return (check_palindrome(s, left + 1, right - 1));
	else
		return (0);
}

