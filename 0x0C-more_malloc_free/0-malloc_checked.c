#include "main.h"

/**
  *malloc_checked - allocates memory
  * @b: amount of bytes
  * Return: pointer to the allocated memory, if fails value is 98
  */
void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}

