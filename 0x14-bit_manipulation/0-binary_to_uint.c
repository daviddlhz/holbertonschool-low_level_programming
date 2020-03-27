#include "holberton.h"

/**
 * binary_to_uint - convert binary to int
 * @b: is the numer binary
 * Return: the number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int pow;
	int i;

	if (b == NULL)
	{
		return (0);

	}

	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);

		}
		i++;

	}

	num = 0;
	pow = 1;
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			num = num + pow;

		}

		i--;
		pow = pow * 2;

	}

	return (num);

}
