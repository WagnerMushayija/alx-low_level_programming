#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatinating strings
 * @dest: destined pointer
 * @src: source video
 * Return: 0 if sucess
 */
char *_strcat(char *dest, char *src)
{
	int length_dest = 0;

	int length_src = 0;

	int i = 0;

	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}
	while (src[length_src] != '\0')
	{
		length_src++;
	}
	for (i = 0; i < length_src; i++)
	{
		dest[length_dest + i] = src[i];
	}
	dest[length_dest + length_src] = '\0';
	return (dest);
}
