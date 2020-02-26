#include "holberton.h"
/**
 * _factorial - This function return the factorial.
 * @n: is a number that find the factorial.
 * Return: Return the factorial.
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
