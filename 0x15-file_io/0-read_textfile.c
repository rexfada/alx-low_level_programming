#include "main.h"
/**
* read_textfile - function that reads a text file and prints it to the POSIX
* @filename: the text file to be read
* @letters: the size of the file
* Return: 0 if file can not be read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_byte, num_read;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
		return (0);

	num_byte = read(fd, buf, letters);
	num_read = write(STDOUT_FILENO, buf, num_byte);
	if (num_read == -1)
		return (0);

	free(buf);
	close(fd);
	return (num_read);
}
