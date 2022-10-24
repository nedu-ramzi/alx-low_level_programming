#include "main.h"
/**
  * print_sign - prints the sign of a number
  * @n: holds the value n
  * Return: 0, -1 and 1
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);

	}
}
