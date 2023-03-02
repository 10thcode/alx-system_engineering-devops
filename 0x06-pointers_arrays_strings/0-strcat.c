#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;
	int j;

	for (len = 0; dest[len]; len++);
	for (i = len, j = 0; src[j]; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
