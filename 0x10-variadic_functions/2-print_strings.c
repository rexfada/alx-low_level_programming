#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
* print_strings - function that print strings
* @separator: the separato character
* @n: the number of strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("(null)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
