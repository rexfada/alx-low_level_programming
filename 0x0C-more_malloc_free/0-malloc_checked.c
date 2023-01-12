#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
* malloc_checked - function to allocate memory using malloc
* @b: the size of the array
* Return: the array
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
