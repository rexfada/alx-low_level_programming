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
		if (n <= 0)
		{
			break;
		}
		else
		{
			continue;
			_putchar('_');
		}
	}
	_putchar ('\n');
}
