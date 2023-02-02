#include"main.h"
/**
* flip_bits - function that returns the number of bits you
*  would need t flip to get
* from one number t another
* @n: an unsigned long int
* @m: another unsigned long int
* Return: the number off flip bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
