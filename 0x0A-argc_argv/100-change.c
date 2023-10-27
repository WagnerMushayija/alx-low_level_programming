#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int ones;

	int twos[] = {25, 10, 5, 2, 1};

	int a, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	ones = atoi(argv[1]);
	if (ones < 0)
	{
		printf("0\n");
		return (0);
	}
	num = 0;
	for (a = 0; a < 5; a++)
	{
		num += ones / twos[a];
		ones = ones % twos[a];
	}
	printf("%d\n", num);
	return (0);
}
