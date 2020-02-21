#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 * @s: is the parameter.
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i;
	int j;
	int n;

	char alpha[] = "oOlLeEaAtT";
	char replace[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		n = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				n = j;
				s[i] = replace[n];
			}
			j++;
		}
		i++;
	}
	return (s);
}
