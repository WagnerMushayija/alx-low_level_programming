#include "main.h"
#include <stdio.h>
/**
 * _islower - lowercase or not
 * @c: string to be used
 * Return: 0 if success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
