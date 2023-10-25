#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: watevs
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1); /* Both strings are empty, considered identical */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0); /* s2 has non-empty string */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1)); /* check rest if this is simmialr */
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)); /*characters that dont match */
	return (0);
}
