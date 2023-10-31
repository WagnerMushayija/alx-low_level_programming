#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that duplicates
 * @str: string used
 * Return: null if fail
 */
char *_strdup(const char *str) 
{
	size_t len;

	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup != NULL)
	{
		strcpy(dup, str);
	}

	return (dup);
}
