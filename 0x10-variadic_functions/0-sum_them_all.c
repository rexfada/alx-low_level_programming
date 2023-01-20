#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
* sum_them_all - fuction to sum all numbers
* @n: the total number of arguments passed
* Return: the sum;
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list data;

	if (n == 0)
		return (0);
	va_start(data, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + (va_arg(data, unsigned int));
	}
	return (sum);
}
