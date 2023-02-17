#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char letter;
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(number + 48);
		number++;
	}

	letter = 'a';
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
