#include "main.h"

/**
  * flip_bits - returns the number of bits to flip to go from
  * one number to another
  * @n: first number
  * @m: second number
  *
  * Return: the number of bits to flip to go from @n to @m
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count;
	unsigned long int xor;

	count = 0;
	xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		if ((xor >> i) & 1)
			count++;
	}

	return (count);
}
