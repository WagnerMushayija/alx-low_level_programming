#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if digit a digit
 * Return: 1
 * @c: the character being checked
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
