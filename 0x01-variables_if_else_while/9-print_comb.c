#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all
 * possible combinations of single-digit numbers.
 * separated by,
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + 48);
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}

	putchar('\n');

	return (0);
}
