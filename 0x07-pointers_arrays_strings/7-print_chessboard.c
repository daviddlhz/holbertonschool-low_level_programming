#include "holberton.h"
/**
 * print_chessboard - check the code for Holberton School students.
 * @a: is the parameter.
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
