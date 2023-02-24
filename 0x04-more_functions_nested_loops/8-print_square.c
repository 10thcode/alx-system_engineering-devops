#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: Nothing
 */
void print_square(int size)
{
	int i;
	int j = size;

	if (size <= 0)
		_putchar('\n');

	while (j > 0)
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j--;
	}
}
