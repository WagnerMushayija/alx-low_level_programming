#include "main.h"
#include <stdio.h>
/*
 * _Strncat - concatinate but precise the size u want to concatinate
 * @dest: destined apce pointer
 * @srt: string used
 * @n: number u want to concatinate
 * Return: 0 if sucess
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest = 0;

	int k = 0;

	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[length_dest + k] = src[k];
		k++;
	}
	dest[length_dest + k] = '\0';
	return (dest);
}
