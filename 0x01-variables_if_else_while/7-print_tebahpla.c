#include<stdio.h>
/**
 * main - alpabet in descending order
 * Return: 0(success)
 */
int main(void)
{

char c;

c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
