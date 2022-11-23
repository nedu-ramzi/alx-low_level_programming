#include "function_pointers.c"

/**
  * int_index - search for an integer
  * @array: array to search in
  * @size: size of the array
  * @cmp: pointer to the comparing function
  *
  * Return: index of the first element for which
  * the cmp function does not return 0, or -1 if no match is found
  * or size is negative
  */
terator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
