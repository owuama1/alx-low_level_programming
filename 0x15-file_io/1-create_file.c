#include "main.h"
#include <stdlib.h>
#include <unistd.h>
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
*create_file - create a file
*@filename: filename
*@text_content: text_content
*Return: 1 on success, -1 on failure (file can not be created
*file can not be written, write “fails”, etc…)
*/

int create_file(const char *filename, char *text_content)
{
	int file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		int bytes_written = write(file_descriptor, text_content,
		_strlen(text_content));

		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
