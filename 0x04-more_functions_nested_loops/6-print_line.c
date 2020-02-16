#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n: is the parameter.
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
