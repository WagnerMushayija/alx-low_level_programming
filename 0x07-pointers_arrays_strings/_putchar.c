#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - for cout
 * @c: character to print out
 * Return: 0 if correct
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
