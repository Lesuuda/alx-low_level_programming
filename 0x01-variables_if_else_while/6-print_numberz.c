#include<stdio.h>
/**
 * main - Entry point
 * Return:0(success)
 */
int main(void)
{

int a;

a = 10;
while (a < 10)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}
