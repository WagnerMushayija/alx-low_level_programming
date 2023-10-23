#include "main.h"
#include <stdio.h>
/**
 * _strstr - function to locate a substring
 * @haystack: string to be used
 * @needle: the substring u want to see
 * Return: idk
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
