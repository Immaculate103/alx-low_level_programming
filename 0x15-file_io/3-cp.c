#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024
/**
 * copy_file - copies the content of one file to another
 *
 * @file_from: Source file
 * @file_to: Destination file
 *
 * Return: 0 on success, exit with error code on failure
 *
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, len;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", file_from);
		return (-1);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", file_to);
		close(fd_from);
		return (-1);
	}
	while ((len = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, len) != len)
		{
			dprintf(STDERR_FILENO, "Error: Short write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}
	if (len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (-1);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (-1);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd_to);
		return (-1);
	}
	return (0);
}
/**
 * main - Entry point function that copies the content of files
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, exit with error code on failure
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	if (copy_file(argv[1], argv[2]) == -1)
	{
		return (99);
	}
	return (0);
}
