#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - printing reversly
 * @s: string to be used
 * return: 0 if success
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
