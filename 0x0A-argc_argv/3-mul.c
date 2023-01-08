#include<stdio.h>
#include<stdlib.h>
/**
* main - program that multiplies 2 numbers
* @argc: the count of argument
* @argv: the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n",atoi(argv[1]) * atoi(argv[2]));
	}	
return (0);
}
