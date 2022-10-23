#include "main.h"

/**
  * print_alphabet_x10 - print ten times the alphabet, in lowercase
  * Return: 0
  */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char az = 'a';

		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}

		_putchar('\n');
		i++;
	}
}

