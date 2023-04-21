#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: s the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, count;

	if (filename != NULL)
	{
		file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

		if (text_content == NULL)
		{
			close(file);
			return (1);
		}

		count = write(file, text_content, _strlen(text_content));

		if (count != -1)
		{
			close(file);
			return (1);
		}
	}

	return (-1);
}

/**
 * _strlen - get the lenght of a string
 * @str: the string
 * Return: the length of str
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
