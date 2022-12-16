#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for digit
* @c: the check character
* Return: 1 if successful, 0 if not
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
