#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - check the code for Holberton School students.
 * @name: is a pointer with contains a string
 * @f: is a pointer to function
 * Return: Nothing is recursive.
 */
void print_name(char *name, void (*f)(char *))
{
	if(f != NULL)
	{
		f(name);
	}
}
