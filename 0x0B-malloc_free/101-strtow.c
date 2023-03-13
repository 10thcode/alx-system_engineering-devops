#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: the string
 * Return: a pointer to an array of strings (words)
 * or NULL if str == NULL or str == ""
 * or if fails to allocate memory
 */
char **strtow(char *str)
{
	int i, n, j, k;
	char **words;
	char *word;

	if (str == NULL || str[0] == '\0' || nwords(str) == 0)
		return (NULL);
	n = nwords(str);
	words = malloc(sizeof(char *) * (n + 1));
	if (words == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < n; i++)
	{
		for (; str[j]; j++)
		{
			if (str[j] != ' ')
			{
				word = malloc(sizeof(char) * nletters(j, str) + 1);
				if (word == NULL)
					return (NULL);
				for (k = 0; str[j] != ' '; j++, k++)
				{
					if (str[j] == '\0')
					{
						j--;
						break;
					}
					word[k] = str[j];
				}
				word[k] = '\0';
				words[i] = word;
				break;
			}
		}
	}

	return (words);
}

/**
 * nletters - number of letter in word
 * @i: starting point
 * @s: full string
 * Return: number of letters
 */
int nletters(int i, char *s)
{
	int sum;

	sum = 0;
	for (; s[i] != ' '; i++, sum++)
	{
		if (s[i] == '\0')
			break;
	}

	return (sum);
}

/**
 * nwords - number of words in a string
 * @s: the string
 * Return: number of words
 */
int nwords(char *s)
{
	int i, sum;

	sum = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] != ' ')
		{
			for (; s[i] != ' '; i++)
			{
				if (s[i] == '\0')
				{
					i--;
					break;
				}
			}
			sum += 1;
		}
	}

	return (sum);
}
