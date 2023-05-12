#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *algo;

	if (list == NULL)
		return (NULL);

	algo = list;

	do {
		list = algo;
		algo = algo->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)algo->index, algo->n);
	} while (algo->express && algo->n < value);

	if (algo->express == NULL)
	{
		list = algo;
		while (algo->next)
			algo = algo->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)algo->index);

	while (list != algo->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
