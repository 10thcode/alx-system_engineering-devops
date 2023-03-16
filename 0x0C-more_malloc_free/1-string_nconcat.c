#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: first number of bytes from s2
 * Return: pointer to s3
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, j;
	char *s3;

	for (len = 0; s1[len]; len++)
		;

	s3 = malloc(sizeof(char) * (len + n + 1));

	j = 0;
	for (i = 0; s1[i]; i++, j++)
		s3[j] = s1[i];

	for (i = 0; i < n && s2[i]; i++, j++)
		s3[j] = s2[i];

	s3[j] = '\0';

	return (s3);
}
