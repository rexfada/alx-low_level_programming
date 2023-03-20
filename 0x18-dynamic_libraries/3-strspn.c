#include "main.h"
/**
* _strspn - function to return length of a prefix substring
* @s: The string
* @accept: the prefix substring
* Return: length of the prefix
*/

unsigned int _strspn(char *s, char *accept)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0' && accept[i] != '\0';  i++)
	{
		if (s[i] == accept[i])
			length++;
		return (sizeof(length) + 1);

	}
	if (s[i] == accept[i])
	{
		length++;
		return (sizeof(length) + 1);
	}

	return (0);
}
