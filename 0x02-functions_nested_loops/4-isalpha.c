#include "main.h"
/**
 * _isalpha - tests for alpahbetic characters
 * @c: is the character to be tested
 * Return: 1 when the chracter is alphabetic and 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
