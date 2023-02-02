#include"main.h"
/**
* set_bit - function that s4ets the value f a bit to 1
* @n: an unsigned long integer
* @index: index starting from 0
* Return: 1 if it worked or -1 if an errr ocurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}

