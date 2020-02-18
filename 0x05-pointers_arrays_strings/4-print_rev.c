#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @str: is the parameter.
 */
void print_rev(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] !='\0'; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
