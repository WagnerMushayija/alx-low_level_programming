#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a char in a string
 * @s: string used
 * @c: character we want to use
 * Return: nothing
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
