#include "main.h"
/**
* _strchr - function that retuns a character in a string
* @s: The string
* @c: The returned character
* Return: Return the character
*/


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
