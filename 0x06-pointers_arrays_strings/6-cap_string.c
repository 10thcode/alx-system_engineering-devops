#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = {
		' ', '\n', '\t', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'
	};

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			for (j = 0; j < 13; j++)
			{
				if (str[i - 1] == sep[j])
				{
					str[i] -= 32;
					break;
				}
			}
		}
	}

	return (str);
}
