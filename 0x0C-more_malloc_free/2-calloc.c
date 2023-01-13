#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
* _calloc - function that allocates memory to an array
* @nmemb: the array
* @size: size of the array
* Return: the array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (unsigned int *)malloc(size * sizeof(unsigned int));
	if (ptr == NULL)
		return (NULL);
	*ptr = nmemb;
	return (ptr);
}
