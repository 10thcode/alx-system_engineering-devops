#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry poin
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, otherwise return 1
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", result);

	return (result);
}
