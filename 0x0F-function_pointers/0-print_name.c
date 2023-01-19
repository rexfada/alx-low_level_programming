#include"function_pointers.h"
#include<stdio.h>
/**
* print_name - function that print a name
* @name: the name
* @f: the function pointer
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

