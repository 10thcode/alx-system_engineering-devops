#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: the string
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char lowers[] = {'a', 'e', 'o', 't', 'l'};
	char uppers[] = {'A', 'E', 'O', 'T', 'L'};
	char nums[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{

			if (str[i] == lowers[j] || str[i] == uppers[j])
				str[i] = nums[j];
		}
	}

	return (str);
}
