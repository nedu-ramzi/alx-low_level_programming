
#include "main.h"

/**
  * print_binary - prints binary representation of a number
  * @n: the decimal number to convert to binary and print
  *
  * Return: Always void
  */

void print_binary(unsigned long int n)
{
	int i;
	int started;
	unsigned long int temp;

	started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;
		if (temp & 1)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
	}
}
