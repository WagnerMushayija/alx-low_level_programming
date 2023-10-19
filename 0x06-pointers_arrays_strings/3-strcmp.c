#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function to compare
 * @s1: string one
 * @s2: string two
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
