#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j, first_digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				first_digit = j;
			else
				first_digit = j / 10;

			_putchar(first_digit + '0');
			if (j > 9)
				_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
