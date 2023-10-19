#include "main.h"
#include <stdio.h>
/**
 * _strncpy - prototype to be used
 * @dest: string used
 * @src: string used
 * @n: number counted
 * return: 0 if sucess
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
