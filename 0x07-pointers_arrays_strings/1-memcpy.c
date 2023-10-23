#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copy data from a to be
 * @dest: the pointer destination
 * @src: the pointer place it's at
 * @n: how much u wanna copy
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
