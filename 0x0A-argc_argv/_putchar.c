#include "main.h"
/**
 * _putchar - print strings
 * @c: the string
 * Return: 0 if success
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
