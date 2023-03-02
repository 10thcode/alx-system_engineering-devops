#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: bytes at most form source
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;
	int j;

	for (len = 0; dest[len]; len++)
		;
	for (i = len, j = 0; j < n; i++, j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
