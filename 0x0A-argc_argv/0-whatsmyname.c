#include<stdio.h>
/**
* main -program to take argument from the CLI
* @argc: the count of arguments
* @argv: the arguments or strins
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s", argv[0]);
	printf("\n");
	return (0);
}
