#include<stdio.h>
/**
* main - Entry point
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
	printf(" ");
	}
	printf("\n");
	return (0);
}
