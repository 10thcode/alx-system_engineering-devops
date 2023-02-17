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
	int sec_number;

	while (number < 10)
	{
		sec_number = 0;
		while (sec_number < 10)
		{
			if (sec_number <= number)
			{
				sec_number++;
			}
			else
			{
				putchar(number + 48);
				putchar(sec_number + 48);
				if (number != 8)
				{
					putchar(',');
					putchar(' ');
				}
				sec_number++;
			}
		}
		number++;
	}

	putchar('\n');

	return (0);
}
