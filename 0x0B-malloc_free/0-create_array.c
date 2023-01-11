#include<stdlib.h>
#include<stdio.h>
#include"main.h"
/**
* create_array - function that create an array of char
* @size: size of the array
* @c: the char
* Return: Return the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
