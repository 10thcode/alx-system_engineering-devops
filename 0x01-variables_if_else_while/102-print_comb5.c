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
	int fn, sn, fd, print_sep = 0;

	for (fn = 0; fn < 100; fn++)
	{
		for (sn = 0; sn < 100; sn++)
		{
			if (fn < sn)
			{
				if (print_sep)
				{
					putchar(',');
					putchar(' ');
				}
				if (fn < 10)
					fd = 0;
				else
					for (fd = fn; fd >= 10; fd /= 10)
						;
				putchar(fd + 48);
				putchar((fn % 10) + 48);
				putchar(' ');
				if (sn < 10)
					fd = 0;
				else
					for (fd = sn; fd >= 10; fd /= 10)
						;
				putchar(fd + 48);
				putchar((sn % 10) + 48);
				print_sep = 1;
			}
		}
	}
	putchar('\n');
	return (0);
}
