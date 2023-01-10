#include<stdio.h>
#include<stdlib.h>
/**
* main - program to return change
* @argc: the number of arguments passed
* @argv: the argument
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int money, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money > 0)
	{
		while (money >= 25)
		{
			money -= 25;
			coins++;
		}
		while (money >= 10)
		{
			money -= 10;
			coins++;
		}
		while (money >= 5)
		{
			money -= 5;
			coins++;
		}
		while (money >= 2)
		{
			money -= 2;
			coins++;
		}
		while (money >= 1)
		{
			money -= 1;
			coins++;
		}
	}
	printf("%i\n", coins);
	return (0);
}
