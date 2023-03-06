#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int last_seg;
	unsigned int i, j;

	last_seg = 0;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[j] == accept[i])
			{
				if (j >= last_seg)
				{
					last_seg = j + 1;
					break;
				}
				break;
			}
		}

		if (s[j] == '\0')
			return (0);
	}

	return (last_seg);
}
