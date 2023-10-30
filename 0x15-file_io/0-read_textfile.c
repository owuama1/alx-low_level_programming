#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
*read_textfile - reads a text file and prints it to the POSIX standard output.
*@filename: the filename
*@letters: number of letters it should read and print
*Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t bytes_read = read(file_descriptor, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
		return (ssize_t)0;

	if (file_descriptor == -1)
		return (ssize_t)0;

	if (buffer == NULL)
	{
		close(file_descriptor);
		return (ssize_t)0;
	}
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (ssize_t)0;
	}

    
	free(buffer);
	close(file_descriptor);

	return ((bytes_written == bytes_read) ? bytes_read : (ssize_t)0);
}
