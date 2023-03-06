#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning
 * of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	char *substring;

	for (i = 0; needle[i]; i++)
	{
		for (j = j; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				if (i == 0)
					substring = &haystack[j];
				j++;
				break;
			}
			i = 0;
		}
		if (haystack[j] == '\0' && i == 0)
			return (NULL);
	}

	return (substring);
}
