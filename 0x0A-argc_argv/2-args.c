#include "holberton.h"
#include <stdio.h>
/**
 * main - this function prints all arguments it recives
 * @argv: return of size of argv
 * @argc: return of values of program
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
