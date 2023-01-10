#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
* main - program that adds numbers
* @argc: the count of arguments
* @argv: the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
