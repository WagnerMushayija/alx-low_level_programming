#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatinating 2 strings
 * @dest: destination to put new string
 * @src: used string
 * Return: 0 if success
 */
char *_strcat(char *dest, char *src)
{
	int leng_dest = 0;

	int leng_src = 0;

	int i = 0;

	while (dest[leng_dest] != '\0')
	{
		leng_dest++;
	}
	while (src[leng_src] != '\0')
	{
		leng_src++;
	}
	for (i = 0; i < leng_src; i++)
	{
		dest[leng_dest + i] = src[i];
	}
	dest[leng_dest + leng_src] = '\0';
	return (dest);
}
