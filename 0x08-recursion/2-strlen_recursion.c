#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returning string lenth
 * @s: string to be used
 * Return: _strlen_recursion if success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
