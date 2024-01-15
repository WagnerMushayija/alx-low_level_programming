#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies data and memory
 * @dest: destination u want to paste it
 * @src: data u want to copy
 * @n: number o fbytse u want to use
 * Return: 0 if success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;


	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}


	return (dest);
}
