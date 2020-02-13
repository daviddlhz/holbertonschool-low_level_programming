#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 * @size: is the parameter.
 * Return: Always 0.
 */
void print_square(int size){

	int j;

        int h;

        if (size > 0)
        {
                for (j = 0; j < size; j++)
                {
                        for (h = 0; h < size; h++)
                        {
                                putchar('#');
                        }
                        putchar('\n');
                }
        }
        else
        {
                putchar ('\n');
        }
}
