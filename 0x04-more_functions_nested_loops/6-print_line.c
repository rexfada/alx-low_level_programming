#include "main.h"
/**
* print_line - program to print staright lines
* @n: the number of lines to draw
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar ('\n');
}
