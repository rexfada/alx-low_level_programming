#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * mul - program to multiply 2 integers
 * @a: first integer
 * @b: second innteger
 * Return: Always 0.
 */
int mul(int a, int b);
int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	return (0);
}
