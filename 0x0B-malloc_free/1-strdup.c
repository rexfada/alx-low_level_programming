#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include"main.h"
/**
* _strdup - function that returns a pointer to the newly allocated memory
* @str: the pointer
* Return: the pointer
*/

char *_strdup(char *str)
{
	int len = strlen(str);
	char *ptr;

	if (str == 0)
	{
		return (NULL);
	}
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
