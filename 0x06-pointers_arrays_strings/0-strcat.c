#include "main.h"

/**
* *_strcat - function that concatenates 2 strings
* @dest: destination string
* @src: Source string
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
	int i, count = 0, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
		i++;
	}

	for (j = 0; j <= count; j++)
	{
		dest[i + count] = src[i];
	}
	return (dest);
}
