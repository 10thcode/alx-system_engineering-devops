#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all
 * single digit numbers of base 10 starting from 0
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + 48);
		number++;
	}

	putchar('\n');

	return (0);
}
