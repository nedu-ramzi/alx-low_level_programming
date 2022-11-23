#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter on each element
  * @array: array to search in
  * @size: size of the array
  * @action: pointer to the comparing function
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
