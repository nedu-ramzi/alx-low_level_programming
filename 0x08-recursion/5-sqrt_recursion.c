#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: value
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	return (_sqrt_recursion(n, 0));
}
