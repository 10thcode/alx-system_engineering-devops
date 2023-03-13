#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to content of s1 + content of s2
 * or NULL if fails to allocate space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;

	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	s3 = malloc((sizeof(char) * (s1_len + s2_len)) + 1);

	if (s3 == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++, j++)
		s3[j] = s1[i];

	for (i = 0; s2[i]; i++, j++)
		s3[j] = s2[i];

	s3[j] = '\0';

	return (s3);
}
