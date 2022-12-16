#include "main.h"

#include <stdio.h>
/**
* _isupper - function to check forupper case character
* @c: the test character
* Return: the reurned character
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
