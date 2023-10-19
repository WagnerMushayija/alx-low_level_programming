#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string as specified "1337"
 * @str: the input
 * Return: the modified text
 */
char *leet(char *str)
{
	int i, j;

	char leetMap[10] = {'o', 'l', 'z', 'e', 'a', 't', 'g', 'q', 'A', 'E'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leetMap[j])
			{
				if (j < 5)
				{
					str[i] = j + '0';
				}
				else
				{
					str[i] = j + 33;
				}
				break;
			}
		}
	}
return (str);
}
