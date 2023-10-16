#include "main.h"
#include<stdio.h>
/**
 * _strlen - gives the length
 * @s: variable to be used
 * Return: 0 if successful
 */
int _strlen(int *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);

}
