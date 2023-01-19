#include<stdio.h>
#include"3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - function to add 2 integers using function pointers
* @a: the first integer
* @b: the second integer
* Return: The result
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - function to subtract 2 integers using function pointers
* @a: the first integer
* @b: the second integer
* Return: The result
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - function to multiply 2 integers using function pointers
* @a: the first integer
* @b: the second integer
* Return: The result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - function to divide 2 integers using function pointers
* @a: the first integer
* @b: the second integer
* Return: The result
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - function to get the modulo of 2 integers using function pointers
* @a: the first integer
* @b: the second integer
* Return: The result
*/
int op_mod(int a, int b)
{
	return (a % b);
}
