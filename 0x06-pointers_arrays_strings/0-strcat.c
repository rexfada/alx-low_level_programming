#include "main.h"

/**
* *_strcat - function that concatenates 2 strings
* @dest: destination string
* @src: Source string
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
	char *p = dest;
	int c;
	int n;

	for (c = 0; dest[c]; c++)
	{

	}
	for (n = 0; src[n]; n++, c++)
	{
		dest[c] = src[n];
	}

	dest[c] = '\0';
	return (p);
}
