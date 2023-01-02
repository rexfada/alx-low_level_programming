#include <stdio.h>
#include "main.h"

/**
* _memset - program to fill memory with constant character
* @s: the pointer character set
* @b: the character set
* @n: the number of time the character is to be printed
* Return: the set character
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
