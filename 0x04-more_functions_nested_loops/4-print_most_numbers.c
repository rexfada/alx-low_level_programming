#include "main.h"
/**
* print_most_numbers - program that prints 0-9 without 2 and 4
* Return: 0
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
