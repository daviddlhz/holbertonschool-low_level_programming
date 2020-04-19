#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a password
 *
 * Return:0;
 */

int main(void)
{
	int i = 0;
	int r = 0;
	int sum = 0;
	char lett_num[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char pass[100];

	srand(time(NULL));
	sum = 0;
	i = 0;
	while (sum < (2772 - 122))
	{
		r = rand() % 62;
		pass[i] = lett_num[r];
		sum = sum + pass[i];
		i++;
	}
	r = 2772 - sum;
	pass[i] = r;
	i++;
	pass[i] = '\0';
	printf("%s", pass);
	return (0);
}
