#include "main.h"

/**
  * _strlen_recursion - Returns the length of a string
  * @s: variable to return
  */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
