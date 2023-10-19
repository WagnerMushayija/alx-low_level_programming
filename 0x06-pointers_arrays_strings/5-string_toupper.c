#include "main.h"
#include <stdio.h>
/**
 * string_toupper - function to lower to upper
 * @str: string to be used
 * Return: a pointer to modified
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - ('a' - 'A');
	}
	i++;
	}

	return (str);
}
