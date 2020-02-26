#include "holberton.h"
/**
 * _print_rev_recursion - prints any string in Reverse.
 * @s: is a array with contains a string
 * Return: Nothing is recursive.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
