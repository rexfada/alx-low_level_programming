#include"main.h"
/**
* string_toupper - function to convert lower case to upper case characteres
* @s: check string
* Return: string
*/



char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
