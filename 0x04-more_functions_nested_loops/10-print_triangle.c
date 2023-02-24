#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size:  the size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n')

	for (i = size; i > 0; i--)
	{
		for (j = i - 1; j > 0; j--)
		{
			_putchar(' ');
		}

		for (j = i - 1; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
