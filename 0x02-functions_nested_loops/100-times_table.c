#include "holberton.h"
/**
 * print_times_table -  function that prints the n times table, starting with 0
 * @n: value of start the table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int ones, tens, hundreds, multiple, row, column;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				multiple = row * column;
				ones = multiple % 10;
				tens = multiple / 10 % 10;
				hundreds = multiple / 100;
				if (hundreds == 0 && column != 0)
				{
					_putchar(' ');
					if (tens == 0)
						_putchar(' ');
					else
						_putchar(tens + '0');
					_putchar(ones + '0');
				}
				else if (hundreds != 0)
				{
					_putchar(hundreds + '0');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
				if (column == 0)
					_putchar('0');
				if (column != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			column = 0;
		}
	}
}
