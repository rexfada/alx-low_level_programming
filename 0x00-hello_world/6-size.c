#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always returns a 0
 *
 */
int main(void)
{

	int integer;
	char c;
	double doubleType;
	float floatType;


	printf("size of an int type is:  %d byte(s)\n", sizeof(integer));
	printf("size of a char type is:  %d byte(s)\n", sizeof(c));
	printf("size of a double type is: %d byte(s)\n", sizeof(doubleType));
	printf("size of a float type is:  %d byte(s)\n", sizeof(floatType));
	return (0);
}
