#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
* string_nconcat - function to concatenate 2 strings
* @s1: first string
* @s2: second string
* @n: size of the string
* Return: the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	len1 = strlen(s1);
	result = (char *) malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncpy(result + len1, s2, n);
	result[len1 + n] = '\0';
	return (result);
}
