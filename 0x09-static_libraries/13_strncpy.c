#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies string to wished number
 * @dest: destined space to paste
 * @src: source string
 * @n: number to copy to
 * Return: 0 if sucess
 */
char *_strncpy(char *dest, char *src, int n)
{
	int v = 0;

	while (v < n && src[v] != '\0')
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}
	return (dest);
}
