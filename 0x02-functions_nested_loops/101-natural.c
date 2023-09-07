#include "main.h"

/**
 * main - A program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024.
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0, i;

	for (i = 1; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	print_num(sum);
	_putchar('\n');

	return (0);
}

/**
 * print_num - prints a number using recursion
 *
 * @num: the number to be printed
 */
void print_num(int num)
{
	if (num <= 0)
		return;

	print_num(num / 10);
	_putchar((num % 10) + 48);
}
