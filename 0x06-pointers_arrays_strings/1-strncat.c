#include "main.h"
#include <stdio.h>
/**
 * _strncat - function to be executed
 * @dest: first string
 * @src: second string
 * @n: it's size 
 * Return: 0 if successful
 */
char _strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++
	}
	dest[dest_len + 1] = '\0';
	return (dest);
}
