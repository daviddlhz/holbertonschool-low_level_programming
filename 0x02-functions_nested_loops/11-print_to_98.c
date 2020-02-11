#include "holberton.h"
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: this is the parameter number.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");

}
