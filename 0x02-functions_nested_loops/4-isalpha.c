#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 *@c: parameter check characters of alphabet
 * Return: Always 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
