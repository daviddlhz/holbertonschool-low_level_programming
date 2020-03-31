#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints
 * @filename: route of file
 * @letters: number of letters
 * Return: Reading the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t readd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}
	else
	{
		readd = read(file, buffer, letters);
		readd = write(STDOUT_FILENO, buffer, readd);

		if (readd == 0)
		{
			return (0);
		}
		else
		{
			free(buffer);
			close(file);
			return (readd);
		}
	}
}
