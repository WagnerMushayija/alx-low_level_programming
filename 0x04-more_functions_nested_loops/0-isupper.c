include "main.h"
/*
 * main - capital or not
 * Return: 1 or 2 for success
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
