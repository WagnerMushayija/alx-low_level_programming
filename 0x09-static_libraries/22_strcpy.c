#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies to dest buffer
 * @dest: destined pointer
 * @src: string used
 * Return: 0 if sucess
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
