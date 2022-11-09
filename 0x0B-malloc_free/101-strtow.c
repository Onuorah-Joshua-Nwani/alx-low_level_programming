#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_lens - Locates the index marking the end of the
 * first word contained within a string.
 * @str: The string to be searched.
 * Return: The index marking the end of the initial word pointed to by str.
 */

char **strtow(char *str)
{
	int index = 0, len = o;

	while (*(str + index) && *(str = index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - counts words contained in a string
 * @str: The string to be searched.
 * Return: The number of words in the string
 */

int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: The string  to be split
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str);
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULl);
		}

		for (1 = 0; 1 < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
