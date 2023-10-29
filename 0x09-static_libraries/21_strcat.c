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
	int len_1, len_2;

	len_1 = 0;
	len_2 = 0;

	while (dest[len_1] != '\0')
		len_1++;

	while (src[len_2] != '\0')
	{
		dest[len_1] = src[len_2];
		len_2++;
		len_1++;
	}

	dest[len_1] = '\0';

	return (dest);
}
