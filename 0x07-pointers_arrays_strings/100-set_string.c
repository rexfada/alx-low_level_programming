#include<stdio.h>
#include"main.h"
/**
* set_string - function to set a pointer to char
* @s: the pointer
* @to: the char
*/
void set_string(char **s, char *to)
{
	*s = to;
}
