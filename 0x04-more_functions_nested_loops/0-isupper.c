#include "main.h"
/**
  * _isupper - checks if varaiable c is uppercase
  * @c: Accept character value
  * Return: return 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
