#include "main.h"
#include <stdio.h>
/**
 * _strcat - for concating two strings
 * @dest: pointer 1
 * @src: pointer 2
 * Return: 0 if success
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;

	int src_len = 0;

	int i = 0;

	while (dest_len)
