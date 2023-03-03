#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i;
	int letters[] = {
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', '-', '-', '-', '-',
		'-', '-', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
		'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'
	};

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = letters[str[i] - 65];
	}

	return (str);
}
