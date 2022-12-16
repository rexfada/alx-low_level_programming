#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 */

int largest_number(int a, int b, int c)
{
	if (a > b && b > c)
	{
		printf("%d is the largest number\n", a);
	}
	else if (b > a && a > c)
	{
		printf("%d is the largest number\n", b);
	}
	else if (c > b && b > a)
	{
		printf("%d is the largest number\n", c);
	}
	return (0);
}
