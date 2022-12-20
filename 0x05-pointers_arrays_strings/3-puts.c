#include "main.h"
/**
* _puts - function that prints a string to stdio
* @s: the string
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		++*s;
	}
	_putchar('\n');
}
