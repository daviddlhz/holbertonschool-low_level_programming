#include "holberton.h"
/**
 *str_concat - returns a pointer that contains a string
 * that is a combination of two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	char *emp;
	int i, j, k;

	emp = "";
	if (s1 == NULL)
		s1 = emp;
	if (s2 == NULL)
		s2 = emp;
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;
	str = malloc((i + j) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];
	j = 0;
	while (s2[j] != '\0')
	{
		str[k] = s2[j];
		j++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
