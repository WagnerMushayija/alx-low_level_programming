include "main.h"
/**
 * _isupper - capital or not
 * Return: 1 or 2 for success
 * @c: to be checked
 **/

/*small descripiton*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
