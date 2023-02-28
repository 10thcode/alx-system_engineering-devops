#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char srev[120];

	for (i = 0; i < len; i++)
	{
		srev[i] = s[len - 1 - i];
	}
	srev[i] = '\0';
}
