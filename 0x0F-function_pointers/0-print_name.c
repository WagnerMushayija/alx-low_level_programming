#include "main.h"
#include <stdio.h>
/**
 * print_name - function to a pointer printing a name
 * @name; name pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return (NULL);
	}
	f(name);
}
