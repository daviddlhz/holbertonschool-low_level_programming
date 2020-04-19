#include <stdio.h>

/**
 * main - natural numbers
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		a = i % 3;
		b = i % 5;
		if (a == 0 || b == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
