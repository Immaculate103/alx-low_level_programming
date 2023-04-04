#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head pointer to NULL
 * @head: a pointer to a pointer to the head of the list to free
 *
 * Description: Frees each node in the list starting from the head and sets the
 *              head pointer to NULL when the list is fully freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
