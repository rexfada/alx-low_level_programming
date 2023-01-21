#include "variadic_functions.h"
#include<string.h>
/**
* print_all - function to prints anything
* @format: the number of arguments
*
*/
void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0;
	char *s, c;

	va_start(all, format);
	while (format[i])
	{
		c = format[i];
		if (c == 'c')
			printf("%c", va_arg(all, int));
		if (c == 'i')
			printf("%i", va_arg(all, int));
		if (c == 'f')
			printf("%f", va_arg(all, double));
		if (c == 's')
		{
			s = va_arg(all, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				printf("%s", s);
		}
		i++;
	}
	printf("\n");
}
