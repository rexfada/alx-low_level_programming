#include<stdio.h>
/**
* main - program that prints all the argumentss it receives
* @argc: the count of arguments
* @argv: the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	return (0);
}
