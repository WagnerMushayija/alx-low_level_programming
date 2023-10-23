#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches for a string for any set of bytes
 * @s: string to be used
 * @accept: pointer to the string
 * Return: nothing
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ch = accept;

		while (*ch != '\0')
		{
			if (*s == *ch)
			{
				return (s);
			}
			ch++;
		}
		s++;
	}
	return (NULL);
}
