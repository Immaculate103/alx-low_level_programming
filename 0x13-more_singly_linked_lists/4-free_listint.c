#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of the list to free
 *
 * Description: Frees each node in the list starting from the head, setting
 *              the head pointer to NULL when the list is fully freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
