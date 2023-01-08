#include<stdio.h>
/**
* main - program that counts the number of arguments passed into it
* @argc: te number of arguments
* @argv: the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
