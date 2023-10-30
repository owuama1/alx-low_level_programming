#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
*error_usage - error usage
*Return: nothing
*/

void error_usage()
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
*error_cant_read - print can not read file
*@file: file
*Return: nothing
*/
void error_cant_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
*error_cant_close - print can not close the file
*@file: file
*Return: nothing
*/

void error_cant_write(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file);
	exit(99);
}
/**
*error_cant_close - print error can not close
*@fd: fd
*Return: nothing
*/
void error_cant_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
*main - copies the content of a file to another file.
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	int source_fd, target_fd, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_usage();
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		error_cant_read(argv[1]);

	target_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (target_fd == -1)
		error_cant_write(argv[2]);

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(target_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_cant_write(argv[2]);
	}

	if (bytes_read == -1)
		error_cant_read(argv[1]);

	if (close(source_fd) == -1)
		error_cant_close(source_fd);

	if (close(target_fd) == -1)
		error_cant_close(target_fd);

	return (0);
}
