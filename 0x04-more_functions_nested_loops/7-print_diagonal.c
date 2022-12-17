#include "main.h"
/**
* print_diagonal - prints diagonal line on thenscreen
* @n: the number of times to print
*/

void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
		}
	_putchar('\n');
	}
}
