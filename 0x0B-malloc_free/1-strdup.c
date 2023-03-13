#include <stddef.h>
#include <stdlib.h>

/*
 * _strdup - creates a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the given string
 *
 * Return: pointer to the newly created string
 * or NULL if str = NULL
 * or NULL if fails to allocate space in memory
 */
char *_strdup(char *str)
{
	int i, len;
	char *newstr;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	newstr = malloc(sizeof(char) * len + 1);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		newstr[i] = str[i];

	return (newstr);
}
