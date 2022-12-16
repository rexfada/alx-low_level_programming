#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @x: character in question
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		x = -x;
	}
	y = x % 10;
	if (y < 0)
	{
		y = -y;
	}
	_putchar(y + '0');

	return (y);

}
