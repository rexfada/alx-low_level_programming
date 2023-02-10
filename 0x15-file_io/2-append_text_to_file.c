#include"main.h"
/**
* append_text_to_file - function that appends text at the end of a fille
* @filename: name of the file
* @text_content: NULL terminated string to add to the end of the file
* Return: -1 if filename is NULL and 1 on success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");
	int result;

	if (filename == NULL)
	{
		return (-1);
	}

	if (file == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fclose(file);
		return (1);
	}

	result = fputs(text_content, file);
	fclose(file);
	return ((result >= 0) ? 1 : -1);
}
