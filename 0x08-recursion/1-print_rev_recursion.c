#include"main.h"
/**
* _print_rev_recursion - function that print a strig in reverse using recursion
* @s: the string
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
