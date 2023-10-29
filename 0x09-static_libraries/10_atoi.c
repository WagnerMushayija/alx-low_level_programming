#include "main.h"
#include <stdio.h>
/**
 * _atoi - converting string to numbers
 * @s: string to put to num,ber
 * Return: 0 if success
 */
int _atoi(char *s)
{
	int i, p, n, length, f, num;

	i = 0;
	p = 0;
	n = 0;
	length = 0;
	f = 0;
	num = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++p;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (p % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
