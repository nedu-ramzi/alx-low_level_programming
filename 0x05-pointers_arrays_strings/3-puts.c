#include "main.h"

/**
  * _puts - prints a string
  * @str: hold the strings
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
