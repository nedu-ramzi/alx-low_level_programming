#include "main.h"

/**
  * _pow_recursion - returns the value of x raised
  * to the power y
  * @x: holds x value
  * @y: holds y value
  * Return: x
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
	return (x * _pow_recursion(x, y - 1));
}  
