#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string used
 * @accept: pointer of the set of characters
 * Return: idk
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int found;

	int i;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

	if (found)
	{
		count++;
	}
	else
	{
		break;
	}
	s++;
	}
	return (count);
}
