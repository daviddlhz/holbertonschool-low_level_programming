#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0;
 */


int main(void)
{
	long i = 0;
	long num_lar = 0;
	long number = 0;

	number = 612852475143;
	for (i = 2; i < sqrt(number); i++)
	{
		if ((number % i) == 0)
		{
			num_lar = i;
			number = number / i;
			i = 1;
		}
	}
	num_lar = number;
	printf("%ld\n", num_lar);
	return (0);
}
