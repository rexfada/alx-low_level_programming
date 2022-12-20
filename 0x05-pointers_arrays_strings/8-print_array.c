#include"main.h"
/**
* print_array - funtion that prints n elements of an integer array
* @a: the array
* @n: the no of elemens in the array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
	printf("\n");
}
