#include "variadic_functions.h"
/**
 *print_numbers - prints numbers.
 *@n: numbers inside parameters.
 *@separator: separator.
 *
 *Return: print numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int count;

	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		cont = va_arg(valist, int);
		printf("%i", count);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
