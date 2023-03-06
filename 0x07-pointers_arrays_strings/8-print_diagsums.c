#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: the square matrix
 * @size: the size of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int *temp = a;

	sum += *a;
	for (i = 0; i < size - 1; i++)
		sum += *(a += size + 1);

	printf("%d, ", sum);

	sum = 0;
	a = temp;
	for (i = 0; i < size; i++)
		sum += *(a += size - 1);

	printf("%d\n", sum);
}
