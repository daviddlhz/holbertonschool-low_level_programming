#include "holberton.h"

/**
 * main - entry point
 * usr daviddlhz
 * Description: Prints Holberton with _putchar
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char p[] = "Holberton\n";

	while (i <= 9)
	{
		_putchar(p[i]);
		i++;
	}
	return (0);
}
