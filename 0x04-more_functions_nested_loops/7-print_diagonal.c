#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n: is the parameter.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int j;

	int h;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (h = 0; h < j; h++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
