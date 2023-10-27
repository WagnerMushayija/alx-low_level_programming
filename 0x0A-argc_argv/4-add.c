#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 * argc: argument count
 * @argv: argoument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{

	char *arg = argv[i];

	for (j = 0; arg[j] != '\0'; j++)
	{
		if (!isdigit(arg[j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
