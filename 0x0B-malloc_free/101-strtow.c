#include <stdlib.h>
#include "main.h"

/**
 * c_words - function that counts words of a string
 * @s: string to counted
 * Return: word number
 */
int c_words(char *s)
{
	int flag, char_count, word_count;

	flag = 0;

	word_count = 0;

	for (char_count = 0; s[char_count] != '\0'; char_count++)
	{
		if (s[char_count] == ' ')
		flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **word_array, *word_ptr;
	int i, index = 0, str_len = 0, num_words, char_index = 0, start, end;

	while (*(str + str_len))
		str_len++;
	num_words = c_words(str);
	if (num_words == 0)
	return (NULL);

	word_array = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (word_array == NULL)
		return (NULL);

	for (i = 0; i <= str_len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (char_index)
			{
				end = i;
				word_ptr = (char *)malloc(sizeof(char) * (char_index + 1));
				if (word_ptr == NULL)
					return (NULL);
				while (start < end)
					*word_ptr++ = str[start++];
				*word_ptr = '\0';
				word_array[index] = word_ptr - char_index;
				index++;
				char_index = 0;
			}
		}
		else if (char_index++ == 0)
			start = i;
	}

	word_array[index] = NULL;

	return (word_array);
}
