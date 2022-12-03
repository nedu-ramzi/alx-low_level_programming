#include "main.h"

/**
  * get_endianness - checks the endianness of a computer
  *
  * Return: 0 if big endian, 1 otherwise
  */

int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return (*c);
}
