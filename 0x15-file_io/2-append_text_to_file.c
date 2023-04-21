#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: where filename is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (filename != NULL)
	{
		if (text_content == NULL)
			return (1);

		file = open(filename, O_WRONLY | O_APPEND);

		if (file != -1)
		{
			write(file, text_content, _strlen(text_content));
			close(file);

			return (1);
		}

		close(file);
	}

	return (-1);
}

/**
 * _strlen - get the length of a string
 * @str: the string
 * Return: the length of a string
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
