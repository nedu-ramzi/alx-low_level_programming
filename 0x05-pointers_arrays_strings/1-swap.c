#include "main.h"
/**
  * swap_int - swaps the value of two integers
  * @a: holds value a
  * @b: holds value b
  */
void swap_int (int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = *a;
}
