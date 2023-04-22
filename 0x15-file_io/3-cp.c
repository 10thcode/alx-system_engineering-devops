#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successfull
 */
int main(int argc, char *argv[])
{
	int src, dest, count;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);

	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 00664);

	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (1)
	{
		count = read(src, buffer, 1024);
		write(dest, buffer, count);
		if (count < 1024)
			break;
	}

	close_fd(dest);
	close_fd(src);

	return (0);
}

/**
 * close_fd - closes a file decriptor
 * @fd: the file descriptor
 * Return: void
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
