#include "main.h"
/**
* positive_or_negative - prints if a number is positive or negative or 0
* @i: i the integer to test with
* Return: the program returns 0
*/

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero", i);
	}
	else if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
}
