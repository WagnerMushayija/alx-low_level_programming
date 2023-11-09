#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function to summ stuff
 * @n: the constant variable
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list args;

	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
