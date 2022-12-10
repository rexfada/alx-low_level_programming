#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 *
 */
int main(void)
{
	char ch, ch2;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
	{
		putchar(ch2);
	}
	putchar('\n');
	return (0);
}
