#include <stdio.h>
#include "main.h"
/**
* print_diagsums - function to print sum of the diagonals of a matrix
* @a: the matrix
* @size: the size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i;
	int s = 0;
	int b = 0;

	for (i = 0; i < size; i++)
		s += a[i * (size + 1)];
	printf("%d, ", s);

	i = size - 1;

	while (i < (size * size) - (size - 1))
	{
		b += a[i];
		i += (size - 1);
	}

	printf("%d\n", b);

}
