#include "holberton.h"
/**
 *array_range - creates an array of integers.
 *@min: firts integer number.
 *@max: last integer number.
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *a;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min + 1;
	a = malloc(sizeof(int) * j);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
