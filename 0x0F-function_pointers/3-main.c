#include <string.h>
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int result;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (
		strcmp(argv[2], "+") &&
		strcmp(argv[2], "-") &&
		strcmp(argv[2], "/") &&
		strcmp(argv[2], "*") &&
		strcmp(argv[2], "%")
	)
	{
		printf("Error\n");
		exit(99);
	}

	func = get_op_func(argv[2]);
	result = (*func) (atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}




