#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - squareroot of number
 * @n: number
 * Return: watevs
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (act_sqrt_rec(n, 0));
}

/**
 * act_sqrt_rec - calculates actual recursion
 * @n: number to sqrt
 * @m: iterator
 * Return: watevs
 */
int act_sqrt_rec(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	return (act_sqrt_rec(n, m + 1));
}
