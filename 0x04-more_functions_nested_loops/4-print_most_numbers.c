#include "main.h"
/**
  * print_most_numbers - prints 0-9 minus 2 & 4
  * Return: always 0
  */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n == 2 && n == 4)
		{
			continue;
			_putchar(a + '0');
		}
		n++;
	}
	_putchar('\n');
}
