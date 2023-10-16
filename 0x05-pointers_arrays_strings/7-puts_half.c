#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints numbers with new line
 * @str: string to be used
 * Return: 0 if success
 */
void puts_half(char *str)
{
	int len = 0;

	int start;

	int i;

	while (str[len] != '\n')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
	for (i = start; str[i] != '\0'; i++)
	{
		putchar(str[1]);
	}
	putchar('\n');
}
