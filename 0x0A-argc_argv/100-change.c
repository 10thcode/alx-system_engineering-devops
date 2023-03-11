#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, otherwise return 1
 */
int main(int argc, char *argv[])
{
	int i;
	int result;
	int change;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
	}
	else
	{
		result = 0;
		for (i = 0; i < 5; i++)
		{
			if (change - coin[i] >= 0)
			{
				change -= coin[i];
				i--;
				result++;
			}
		}
		printf("%d\n", result);
	}
	return (0);
}


	
