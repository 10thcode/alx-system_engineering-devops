#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: void
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	if (*c == 1)
		return (1);

	return (0);
}
