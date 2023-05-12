#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	int lo = 0;
	int hi = size - 1;
	size_t pos;
	double p;

	if (array == NULL)
		return (-1);

	while (size)
	{
		p = ((double)(hi - lo) / (array[hi] - array[lo])) * (value - array[lo]);
		pos = (size_t)(lo + p);
		printf("Value checked array[%ld]", pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);

		if (array[pos] == value)
			return ((int)pos);
		else if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
