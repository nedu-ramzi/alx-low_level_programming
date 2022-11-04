#include "main.h"

/**
  * _strlen_recursion - Returns the length of a string
  * @s: variable to return
  */

int _strlen_recursion(char *s)
{
	len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
