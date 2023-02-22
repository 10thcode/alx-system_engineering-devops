#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: The number to start from.
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%i", n);
			else
				printf("%i, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%i", n);
			else
				printf("%i, ", n);
		}
	}
	putchar('\n');
}
