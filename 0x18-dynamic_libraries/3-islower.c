#include "main.h"
/**
  * _islower - checks for lowercase character
  * @c: hold the input
  * Return: one or 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
