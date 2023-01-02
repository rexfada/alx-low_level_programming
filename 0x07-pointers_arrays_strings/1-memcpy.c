#include "main.h"
/**
* _memcpy - function to copy a memory location
* @dest: Destination location
* @src: source location
* @n: number of bytes to copy
* Return: copied memory
*/



char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
