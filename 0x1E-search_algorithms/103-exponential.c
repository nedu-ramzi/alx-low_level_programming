#include "search_algos.h"
int _binary_search(int *array, size_t left, size_t right, int value);

/**
 * _binary_search -  function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @l: left values
 * @r: right values
 * @value: value to search for
 * Return: the index where value is located
 */
int _binary_search(int *array, size_t l, size_t r, int value)
{
	size_t m, i;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		m = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
		}
		printf("\n");
		if (array[m] < value)
			l = m + 1; /* search in the right half */
		else if (array[m] > value)
			r = m - 1; /* search in the left half */
		else if (array[m] == value)
			return (m); /* return index if value is found */
	}
	return (-1);
}

/**
 * exponential_search -  function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return: the first ndex where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, right;

	if (array == NULL)
		return (-1);
	i = 0;
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
