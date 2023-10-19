#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*count_words - counts the words
*@str: string
*Return: number of words
*/
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			is_word = 0;
		} else if (!is_word)
		{
			is_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}
/**
*strtow - splits a string into words.
*@str: string
*Return: pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	int num_words, i;
	char **words;
	int word_index = 0, word_length = 0, is_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (is_word)
			{
				words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (i = 0; i < word_index; i++)/*Malloc failed; free. return NULL*/
						free(words[i]);
					free(words);
					return (NULL);
				}
				strncpy(words[word_index], str - word_length, word_length);
				words[word_index][word_length] = '\0';
				word_index++;
				word_length = 0;
			}
			is_word = 0;
		} else
		{
			is_word = 1;
			word_length++;
		}
		str++;
	}
	if (is_word)
	{
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			/* Memory allocation failed; clean up and return NULL*/
			for (i = 0; i <= word_index; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		strncpy(words[word_index], str - word_length, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
