#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet x10 in lwer case
 */

void print_alphabet_x10(void)
{

char letter;
int a = 0;

while (a <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
a++;
}
}
