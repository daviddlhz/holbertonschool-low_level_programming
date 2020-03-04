#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * for a specific amount of change
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0 for success, for error
 */
int main(int argc, char *argv[])
{
	int num, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			res++;
			num -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
