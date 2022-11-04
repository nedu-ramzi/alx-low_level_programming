#include "main.h"
/**
  * _puts_recursion - prints a given string
  * @s: string variable
  * Return: string
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		 _puts_recursion(s)++;
	}
	else
	{
		_putchar('\n');
	}
}

