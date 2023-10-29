#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies  the strig
 * @dest: edstination output
 * @src: source string
 * Return: 0 if succesds
 */
char *_strcpy(char *dest, char *src)
{
	int length, k;

	while (src[length] != '\0')
	{
		length++;
	}
	for (k = 0; k < length; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}
