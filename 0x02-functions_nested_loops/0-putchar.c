#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always return 0 (Sucess)
 */
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
