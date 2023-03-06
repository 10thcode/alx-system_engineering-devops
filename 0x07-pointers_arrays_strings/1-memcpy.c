#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes to copy from src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *temp;

	temp = dest;
	for (i = 0; i < n; i++, dest++, src++)
		*dest = *src;

	dest = temp;
	return (dest);
}
