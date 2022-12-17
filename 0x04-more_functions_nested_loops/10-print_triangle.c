#include"main.h"
/**
* print_triangle - program to print triangle of size size
* @size: size of the triangle
*/
void print_triangle(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (k = 0; k > size; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
