#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the sum of all data in the list or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
