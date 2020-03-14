#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 *
 * @n: is a parameter that contains the sizes of parameters
 *
 * Return: 0 if n is 0 or total if not is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int total, i, temp;

		total = 0;

		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			temp = va_arg(args, int);
			total += temp;
		}

		va_end(args);

		return (total);
	}
	else
	{
		return (0);
	}
}
