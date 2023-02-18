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
	int third_number;

	while (number < 10)
	{
		sec_number = 0;
		while (sec_number < 10)
		{
			third_number = 0;
			while (third_number < 10)
			{
				if (third_number <= sec_number || sec_number <= number)
					;
				else
				{
					putchar(number + 48);
					putchar(sec_number + 48);
					putchar(third_number + 48);
					if (number != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				third_number++;
			}
			sec_number++;
		}
		number++;
	}

	putchar('\n');

	return (0);
}
