#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints exactly
 * and that piece of art is useful\"
 * - Dora Korpar, 2015-10-19
 * Return: Always return 1 (Error)
 */
int main(void)
{
	fwrite(
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	1, 59,
	stderr);
	return (1);
}
