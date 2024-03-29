#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
* print_numbers - function to print numbers
* @separator: string to be printed between numbers
* @n: the number of integers to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
