#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: the number to convert to binary
  * @index: the index to return the bit from
  *
  * Return: the value of the bit at index @index
  * -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
