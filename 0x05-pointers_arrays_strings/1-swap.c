#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap 2 numbers
 * @a: first number
 * @b: second number
 * Return: 0 if success
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
