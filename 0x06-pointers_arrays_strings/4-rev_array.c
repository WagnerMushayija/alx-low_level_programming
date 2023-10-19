#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function to reverse string
 * @a: string
 * @n: nu,ber of element
 * Return: 0 if sucess
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
