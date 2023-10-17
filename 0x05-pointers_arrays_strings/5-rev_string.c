#include "main.h"
#include <stdio.h>
/**
 * rev_string - reversing strings entered
 * @s:string to be printed
 * Return: 0 if successful
 */
void rev_string(char *s)
{
	int len = 0, start, end;

	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	start = 0;
	end = len - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
