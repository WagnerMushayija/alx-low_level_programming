#include "main.h"
#include <stdio.h>
/**
 * _strstr - substring to relocate
 * @haystack: string 1 used
 * @needle: substring used
 * Return: 0 if success
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{

		char *h = haystack;

		char *n = needle;


		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')

		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);

}
