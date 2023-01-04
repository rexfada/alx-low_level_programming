#include<stdio.h>
#include"main.h"
/**
* _puts_recursion - funtions that uses recursion to print a string
* @s: the string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
