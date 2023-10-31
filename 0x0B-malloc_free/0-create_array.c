#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creating array usuing malloc
 * @size: size of memory we want
 * @c: character or string to be used
 * Return: 0 if sucess
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}

	return (array);
}
