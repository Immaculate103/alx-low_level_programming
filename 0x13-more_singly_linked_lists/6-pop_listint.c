#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to a pointer to the head of the list to modify
 *
 * Return: the value of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	val = temp->n;
	*head = temp->next;
	free(temp);
	return (val);
}
