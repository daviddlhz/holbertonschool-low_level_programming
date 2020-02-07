#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int one;
int two;
one = 48;
two = 49;
while  ((one < 57) && (two < 58))
{
putchar(one);
putchar(two);
if ((one == 56) && (two == 57))
{
putchar('\n');
one++;
two++;
}
else
{
putchar(44);
putchar(32);
if (two < 57)
{
two++;
}
else
{
one++;
two = 1 + one;
}
}
}
return (0);
}
