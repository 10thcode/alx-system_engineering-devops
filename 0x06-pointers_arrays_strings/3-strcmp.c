#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: negative number if s1 < s2,
 * positive number if s1 > s2
 * and 0 if s1 is equal to s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; s1[i]; i++)
		sum1 += s1[i];

	for (i = 0; s2[i]; i++)
		sum2 += s2[i];

	return (sum1 - sum2);
}
