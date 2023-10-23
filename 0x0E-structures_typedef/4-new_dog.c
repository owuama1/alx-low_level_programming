#include "dog.h"
#include <stdlib.h>
/**
*_strlen - finds the length of the string
*@s: a string
*Return: the length
*/
int _strlen(char *s)
{
		int i;

		for (i = 0; *s != '\0'; i++)
			s++;
		return (i);
}
/**
*_strcpy - copies the string pointed to by src to dest
*@src: source
*@dest: destination
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
		char *dest_start = dest;

		if (src == NULL || dest == NULL)
		{
			return (NULL);
		}
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}

		*dest = '\0';

		return (dest_start);
}
/**
*_strdup - strdup function
*@str: string
*Return: pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*/
char *_strdup(char *str)
{
		char *duplicate;

		if (str == NULL)
		{
			return (NULL); /* Return NULL if the input string is NULL*/
		}

		duplicate = (char *)malloc(_strlen(str) + 1);

		if (duplicate == NULL)
		{
			return (NULL); /* Return NULL if memory allocation fails*/
		}

		_strcpy(duplicate, str); /* Copy the input string to the new memory*/

		return (duplicate);
}
/**
*new_dog -  creates a new dog.
*@name: name
*@age: age
*@owner: owner
*Return: NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL); /* Memory allocation failed*/
	}

	/* Allocate memory for name and owner and copy the strings*/
	newDog->name = _strdup(name);
	newDog->owner = _strdup(owner);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		/* Memory allocation for strings failed*/
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	return (newDog);
}
