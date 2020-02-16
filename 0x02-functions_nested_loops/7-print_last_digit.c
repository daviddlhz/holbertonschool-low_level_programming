#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *@l: is the parameter
 * Return: Always 0.
 */
int print_last_digit(int l)
{

	int k;

	if (l < 0)
	{
		l = -l;
	}
	k = l % 10;
	if (k < 0)
	{
		k = -k;
	}
	_putchar (k + '0');
	return (k);

}
