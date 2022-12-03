#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: the number to operate on
  * @index: the index to set to 0
  *
  * Return: 1 if successful, -1 otherwise
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n & ~(1UL << index));

	return (1);
}
