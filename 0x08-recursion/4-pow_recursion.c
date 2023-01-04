#include"main.h"
/**
* _pow_recursion - function that returns the power of an integer
* @x: the integer
* @y: the power
* Return: 0 on success
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
