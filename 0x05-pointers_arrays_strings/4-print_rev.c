#include "main.h"
#include <stdio.h>
/**
 * print_rev - to print in reverse
 * @s: variable used
 * Return: 0 if success
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	int i;
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
