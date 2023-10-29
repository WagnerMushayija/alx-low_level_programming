#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the string lenth
 * @s: strig to be used
 * Return: the value
 */
int _strlen(char *s)
{
	int t;

	t = 0;

	while (s[t] != '\0')
	{
		t++;
	}

	return (t);
}
