#include "holberton.h"
/**
 * isDigit - check if is a number
 * @i: number
 * Return: if a number.
 */

int isDigit(int i)
{
	return (i >= 48 && i <= 57);
}
/**
 * _atoi - converts a string to integer
 * @s: pointer of chars
 * Return: res.
 */

int _atoi(char *s)
{
	int res = 0;
	int negs = 0;
	int foundNumber = 0;
	int multiplier = 1;

	while (*s)
	{
		if (!isDigit(*s) && foundNumber)
			break;
		if (*s == '-')
			negs++;
		else if (isDigit(*s))
		{
			foundNumber = 1;
			if (negs % 2)
				multiplier = -1;
			res = res * 10 + (*s - 48) * multiplier;
		}
		s++;
	}
	return (res);
}
