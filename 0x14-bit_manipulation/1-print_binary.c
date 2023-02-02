#include"main.h"
/**
* print_binary - funtion that prints binary representation of a number
* @n: an integer
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
