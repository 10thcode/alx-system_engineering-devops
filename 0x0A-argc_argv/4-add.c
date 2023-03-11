#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, otherwise return 1
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (is_num(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i\n", sum);
	}
	return (sum);
}

/**
 * is_num - check if a string is a number
 * @s: the string
 * Return: 1 if s is a number, otherwise return 0
 */
int is_num(char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			s++;
		else
			return (0);
	}

	return (1);
}
