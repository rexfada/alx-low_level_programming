#include"main.h"
/**
* _strlen_recursion - function to print the length of string
* @s: the string
* Return: the length
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
	return (0);
}
