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
	int fourth_number;

	while (number < 10)
	{
		sec_number = 0;
		while (sec_number < 10)
		{
			third_number = 0;
			while (third_number < 10)
			{
				fourth_number = 0;
				while (fourth_number < 10)
				{
					/* if (fourth_number <= third_number); */
					/* else */
					/* { */
						putchar(number + 48);
						putchar(sec_number + 48);
						putchar(' ');
						putchar(third_number + 48);
						putchar(fourth_number + 48);
					/*	if (sec_number != 8)*/
					/*	{*/
							putchar(',');
							putchar(' ');
					/*	}*/
				/*	}*/
					fourth_number++;
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
