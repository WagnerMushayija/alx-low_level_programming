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

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
