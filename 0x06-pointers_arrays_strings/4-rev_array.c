#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: is the parameter.
 * @n: other paremeter.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux;

	i = 0;
	n = n - 1;

	while (i <= n)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		i++;
		n--;
	}
}
