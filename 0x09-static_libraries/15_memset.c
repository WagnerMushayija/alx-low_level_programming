#include "main.h"
#include <stdio.h>
/**
 * _memset - used to set a block of memory to a specific value.
 * @s: pinter to memory u want to use
 * @b: the value u want to set
 * @n: number of bytes u want to assign
 * Return: 0 if success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;


	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}
