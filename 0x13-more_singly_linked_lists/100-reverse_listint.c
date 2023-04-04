#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head of the list
 *
 * Return: pointer to the new head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *next = NULL;

    while (*head != NULL)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }
    *head = prev;
    return (*head);
}
