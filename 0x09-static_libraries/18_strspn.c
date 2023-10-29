#include "main.h"
#include <stdio.h>
/**
 * _strspn - prefix of substring function
 * @s: string
 * @accept: pointer of character
 * Return: 0 if sucess
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	int find;

	int i;

	while (*s)
	{
		find = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				find = 1;
				break;
			}
		}

	if (find)
	{
		c++;
	}
	else
	{
		break;
	}
	s++;
	}
	return (c);
}
