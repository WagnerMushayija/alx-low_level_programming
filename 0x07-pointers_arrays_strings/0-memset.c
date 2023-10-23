#include "main.h"
#include <stdio.h>
/**
 * _mesmet - function to keep a constant
 * @s: the variable
 * @b: the character
 * @n: the size you want to fill
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++) 
	{
		s[i] = b;
	}
	return (s);
}
