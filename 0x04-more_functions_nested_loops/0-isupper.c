#include "main.h"
#include <stdio.h>
/**
* _isupper - program that checks for upper letter
* @c: the lest character
* Return: 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
