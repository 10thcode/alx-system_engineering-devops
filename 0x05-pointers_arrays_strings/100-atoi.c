#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the sting.
 * Return: an integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			s++;
		}
		else
		{
			break;
		}
	}

	return (result * sign);
}
