#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always returns a 0
 *
 */
int main(void)
{

	char c;
	int integer;
	long int longint;
	long long int longlongint;
	float floattype;


	printf("size of a char type is:  %d byte(s)\n", sizeof(c));
	printf("size of a int type is:  %d byte(s)\n", sizeof(integer));
	printf("size of a long int type is: %d byte(s)\n", sizeof(longint));
	printf("size of a long long int type is:  %d byte(s)\n", sizeof(longlongint));
	printf("size of a float type is: %d byte(s)\n", sizeof(float));
	return (0);
}
