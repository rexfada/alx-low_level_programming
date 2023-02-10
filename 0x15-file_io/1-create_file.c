#include "main.h"
/**
*create_file - function that creates a file
* @filename: name of the created file
* @text_content: content of the creaated file
* Return: -1 or failure and 1 on success
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd  = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		ssize_t written_bytes = write(fd, text_content, strlen(text_content));

		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
