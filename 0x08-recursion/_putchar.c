#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - returns a string
 * @c: the string returned
 * return: 0 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
