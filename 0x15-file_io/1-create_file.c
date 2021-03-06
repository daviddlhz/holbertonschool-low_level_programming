#include "holberton.h"
/**
 * create_file - funtion that creates a file
 * @filename: variable that contains the filename
 * @text_content: variable that contains the content of text
 * Return: 1 on success, -1
 */
int create_file(const char *filename, char *text_content)
{

	ssize_t size = 0;
	int file;
	int file_write;

	if (filename == NULL)
	{
		return (-1);
	}


	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[size])
			size++;

		file_write = write(file, text_content, size);

		if (file_write == -1)
		{
			return (-1);
		}
	}

	close(file);
	return (1);
}
