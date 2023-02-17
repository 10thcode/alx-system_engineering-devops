#include <stdio.h>

/**
 * main - Entry
 *
 * Description: a program that prints the
 * alphabet in lowercase, and then in uppercase.
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char upper = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
