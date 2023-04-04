#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}

	return (count);
}
