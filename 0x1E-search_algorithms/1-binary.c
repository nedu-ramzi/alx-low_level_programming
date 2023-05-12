#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int m;
	int i;

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
