#include "main.h"

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always return 0
 */
int main(int argc, char *argv[])
{
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, mode);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	_copy(file_from, file_to, argv[1], argv[2]);
	_close(file_from);
	_close(file_to);

	return (0);
}

/**
 * _close - closes a file descriptor with an error message
 * @fd: file descriptor
 * Return: void
 */
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * _copy - copy text from one file descriptor to the other
 * @file_from: the file descriptor to be copied from
 * @file_to: the file dexcriptor to be copied to
 * @str1: filename1
 * @str2: filename2
 * Return: void
 */
void _copy(int file_from, int file_to, char *str1, char *str2)
{
	int n;
	char buffer[BUF_SIZE];

	while (1)
	{
		n = read(file_from, buffer, BUF_SIZE);

		if (n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str1);
			exit(98);
		}

		n = write(file_to, buffer, n);

		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str2);
			exit(99);
		}

		if (n < BUF_SIZE);
			break;
	}
}
