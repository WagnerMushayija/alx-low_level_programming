#include "main.h"
/**
 * _isdigit - checks for a digit
 * Return: 1 or 0 if sucess
 * @c: the variable being checked
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
