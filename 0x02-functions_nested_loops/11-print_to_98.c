#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: this is the parameter number.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int a;
	int b;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}

	}
	else if (n > 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", k);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}
