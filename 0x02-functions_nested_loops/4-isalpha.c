#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise
 */
int _isalpha(char c)
{
	if (c >= 'A' && c <= 'Z' && c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
