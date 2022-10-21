#include "main.h"
/**
  * main - Check for isupper prototype
  * _isupper - checks if varaiable c is uppercase
  * @c: Accept character value
  * Return: return 0
  */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
