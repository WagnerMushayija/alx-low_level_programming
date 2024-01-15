#include "main.h"
#include <stdio.h>
/**
 * _strbrk - searching for string
 * @s: string 
 * @accept: pointer assigned to string
 * Return: 0 if sucess
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
