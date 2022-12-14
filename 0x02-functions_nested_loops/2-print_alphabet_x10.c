#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabet in lower case 10x
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int index = 1;

	while (index <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	index++;
		_putchar('\n');
	}
}
