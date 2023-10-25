#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - powering a number as recursion
 * @x: number to be used
 * @y: power to be used
 * Return: watevs
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
