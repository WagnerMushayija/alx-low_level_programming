#include "main.h"
#include <stdio.h>
/**
 * _strchr - put a character in a string
 * @s: string used
 * @c: character placed
 * Return: 0 if success
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
