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

	while (text < strlen(text))
	{
		_putchar(text[i]);
		i++;
	}

	return (0);
}
