#include "main.h"

/**
  * _memset - Fills memory with a constant byte
  * @s: Address of memory to be filled
  * @b: Value to be filled
  * @n: Number of bytes to be filled
  * Return: changed array with new value for n byte
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
