#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: the constant type
 * @: the first bytes of s
 * Return: s;
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *temp;

	temp = s;
	for (i = 0; i < n; i++, s++)
		*s = b;

	s = temp;

	return (s);
}
