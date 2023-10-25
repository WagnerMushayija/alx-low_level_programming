#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checking if its prime or not
 * @n: number entered
 * Return: watevs
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (act_prime(n, n - 1));
}


/**
 * act_prime - calculates recursively
 * @n: numner to be looked
 * @m:ayterator
 * Return: 0watevs
 */
int act_prime(int n, int m)
{
	if (n % m == 0 && m > 0)
	{
		return (0);
	}
	if (m == 1)
	{
		return (1);
	}
	return (act_prime(n, m - 1));
}
