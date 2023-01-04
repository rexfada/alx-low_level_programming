#include<stdio.h>
#include"main.h"
/**
* factorial - function that return a factorial of a number
* @n: the given number
* Return: 0 on success
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
