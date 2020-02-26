#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: is a number
 * @y: is a exponent
 * Return: one number elevate a exponent.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);

	} else if (y == 0)
	{
		return (1);

	} else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
