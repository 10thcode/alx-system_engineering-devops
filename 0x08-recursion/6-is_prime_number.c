#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_divisible(n, 2));
}

/**
 * is_divisible - check if a number is divisible by another number
 * @n: first number
 * @i: second number
 * Return: 0 if divisible otherwise return 1
 */
int is_divisible(int n, int i)
{
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_divisible(n, i + 1));
}
