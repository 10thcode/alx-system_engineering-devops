#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of args
 * @av: argument vector
 * Return: pointer to new string containing content of all args
 * or NULL if fails to allocate space in memory
 * or NULL if ac is 0 or av is NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, len++)
			;
	}

	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
