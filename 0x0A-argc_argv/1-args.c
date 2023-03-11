#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always return 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	putchar((argc - 1) + '0');
	putchar('\n');

	return (0);
}
