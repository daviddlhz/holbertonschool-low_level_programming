#include "holberton.h"
#include <stdio.h>
/**
 * main - this function prints the lenght of parameters of the programan.
 * @argv: return of size of argv.
 * @argc: return of values of program.
 * Return: 0 Always.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i \n", (argc - 1));
	return (0);
}
