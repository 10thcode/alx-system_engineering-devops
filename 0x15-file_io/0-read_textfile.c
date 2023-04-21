#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the text file
 * @letters: the number of letters it should read and print
 * Return: actual number of letters read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, count;
	char *str;

	if (filename != NULL)
	{
		file = open(filename, O_RDONLY);

		if (file != -1)
		{
			str = malloc(letters);

			if (str != NULL)
			{
				count = read(file, str, letters);

				if (count != -1)
				{
					count = write(STDOUT_FILENO, str, count);
					close(file);

					return (count);
				}
			}
		}

	}

	close(file);

	return (0);
}
