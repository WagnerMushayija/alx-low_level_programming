#include "main.h"
#include <stdio.h>
/**
 * factorial - calculates the factorial
 * @n: number used
 * Return: 1 or 0 depends
 */
int factorial(int n)
{
	int result = 1;

	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
