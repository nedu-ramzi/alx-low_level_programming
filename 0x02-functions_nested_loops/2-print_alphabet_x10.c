#include "main.h"

/**
  * main - print ten times the alphabet, in lowercase
  * Return: 0
  */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		int az = 'a';

		while (az <= 'z')
		{
			_putchar(az + '0');
			az++;
		}
		i++;
	}
	_putchar('\n');
	return (0);
}

