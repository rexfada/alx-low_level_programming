#include "main.h"

/**
* _strcmp - function to compare 2 srings
* @s1: first string
* @s2: second sting
* Return: Returns the value of the comparison
*/

int _strcmp(char *s1, char *s2)
{
	int i, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		*/
		if (s1[i] != s2[i])
		{
			/*
			 * return the difference between
			 * the two characters
			*/
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
