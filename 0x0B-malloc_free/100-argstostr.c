#include "main.h"
#include <stdlib.h>
/**
*argstostr - concatenates all the arguments of your program.
*@ac: argument count
*@av: argument vector
*Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int position;
	int i;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL); /* Return NULL for invalid arguments*/
	for (i = 0; i < ac; i++)/*Cal length of concat str, with newlines*/
	{
		int arg_length = 0;

		if (av[i] != NULL)
		{
			while (av[i][arg_length] != '\0')
				arg_length++;
		}
		total_length += arg_length + 1; /* +1 for the newline*/
	}
	concatenated = (char *)malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL); /* Return NULL if memory allocation fails*/
	position = 0;
	for (i = 0; i < ac; i++)
	{
		int arg_length = 0;

		if (av[i] != NULL)
		{
			while (av[i][arg_length] != '\0')
			{
				concatenated[position] = av[i][arg_length];
				position++;
				arg_length++;
			}
		}
		concatenated[position] = '\n'; /* Add a newline character*/
		position++;
	}
	return (concatenated);
}
