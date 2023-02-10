#include "main.h"

#define BUFFER_SIZE 1024

/**
 * copy_file - copy the content of a file to another file
 * @file_from: path to the file to read
 * @file_to: path to the file to write
 * Return: 0 on success, -1 on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, read_count, write_count;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		return (99);
	}
	while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count != read_count)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			return (99);
		}
	}
	if (close(fd_from) == -1)
	{
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}
	return (0);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	return (copy_file(argv[1], argv[2]));
}
