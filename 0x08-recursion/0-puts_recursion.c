#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - printing a string
 * @s: string to be used
 * return: 0 if success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
