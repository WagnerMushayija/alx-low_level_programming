#include "main.h"
#include <stdio.h>
/**
 * puts2 - skips a number
 * @str: string to be used
 * Return: 0 if successful
 */
void puts2(char *str)
{
	int i = 0;

	int len, i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		puchar(str[i]);
	}
	putchar('\n');
}
