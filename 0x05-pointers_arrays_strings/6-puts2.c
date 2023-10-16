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

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
