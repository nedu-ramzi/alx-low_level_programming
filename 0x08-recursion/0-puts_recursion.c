#include "main.h"
#include <stdio.h>
/**
  * _puts_recursion - prints a given string
  * @s: string variable
  * Return: string
  */
void _puts_recursion(char *s)
{
	*s = "";
	_putchar(*s);
}

int main(void)
{
	_puts_recursion("abeg");
	return (0);
}
