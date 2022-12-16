#include "main.h"
/**
* print_line - program to print staright lines
* @n: the number of lines to draw
*/

void print_line(int n)
{
	int i;
	char ch = '_';

	for (i = 0; i <= n; i++)
	{
		_putchar(ch);
	}
	_putchar ('\n');
}
