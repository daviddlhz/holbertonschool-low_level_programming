#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("%i This number is positive", n);
}
else if (n == 0)
{
printf("%i This number is zero", n);
}
else
{
printf("%i This number is negative", n);
}
return (0);
}
