#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: the number to set
  * @index: the index to set to 1
  *
  * Return: 1 if successful, 0 otherwise
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n | (1UL << index));

	return (1);
}
