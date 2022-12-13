#include "main.h"
#include <stdio.h>
/**
 * main- print alphabet a-z in small letters
 * prints alphabet in small letters
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
