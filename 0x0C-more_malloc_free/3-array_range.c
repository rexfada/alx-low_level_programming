#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
* array_range - function that return range of an integer array
* @min: minimum entry
* @max: maximum entry
* Return: The array
*/

int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min + i;
	return (p);
}
