#include "main.h"
/**
* print_most_numbers - program that prints 0-9 without 2 and 4
* Return: 0
*/
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
