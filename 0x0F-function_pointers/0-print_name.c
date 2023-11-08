#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function to a pointer printing a name
 * @name; name pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
