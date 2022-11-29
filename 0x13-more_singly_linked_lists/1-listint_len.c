#include "lists.h"

/**
  * listint_len - counts the number of nodes in a linked list
  * @h: head of the list
  *
  * Return: the number of elements
  */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
