#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - prints strings
 * @c: string to be used
 * Return: 0 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
