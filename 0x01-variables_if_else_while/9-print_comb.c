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

	for (i = 48; i <= 56; i++)
	{
	putchar (i);
	putchar (',');
	}
	putchar (57);
	putchar ('\n');
	return (0);
}

