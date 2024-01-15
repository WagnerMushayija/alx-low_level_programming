#include "main.h"
#include <stdio.h>
/**
 * _isupper - capital or not
 * Return: 1 or 0 for success
 * @c: strig to be checked
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
