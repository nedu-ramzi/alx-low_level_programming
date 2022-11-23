#include "function_pointers.c"

/**
  * array_iterator - executes a function given as a parameter on each element
  * @array: array to search in
  * @size: size of the array
  * @cmp: pointer to the comparing function
  *
  * Return: index of the first element for which
  * the cmp function does not return 0, or -1 if no match is found
  * or size is negative
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
