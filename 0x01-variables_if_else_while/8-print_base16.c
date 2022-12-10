#include <stdio.h>
/**
 * main - enter
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
