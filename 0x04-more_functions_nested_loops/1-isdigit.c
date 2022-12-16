#include "main.h"
#include <stdio.h>

/**
* _isdigit - program that checks for digit
* @c: the test character
* Return: 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
