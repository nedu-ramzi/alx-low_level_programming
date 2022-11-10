#include "main.h"

/**
  * _puts - prints a string
  * @str: hold the strings
  */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
