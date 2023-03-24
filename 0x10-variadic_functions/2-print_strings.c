#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: number of arguments to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (separator == NULL)
		return;
	if (n == 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			if (i == (n - 1))
				printf("(nil)\n");
			else
				printf("(nil)%s", separator);
		else
			if (i == (n - 1))
				printf("%s\n", str);
			else
				printf("%s%s", str, separator);
	}
	va_end(ap);
}
