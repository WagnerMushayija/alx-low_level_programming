#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks if the string is apla
 * @c: string used
 * Return: 0 if success
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
