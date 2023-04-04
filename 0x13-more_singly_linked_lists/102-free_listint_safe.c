/**
 * free_listint_safe - frees a listint_t linked list safely
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *temp, *current;

	while (*head != NULL)
	{
		count++;
		temp = (*head)->next;
		free(*head);
		*head = NULL;
		current = temp;
		while (current != NULL && current < temp)
		{
			count++;
			temp = current->next;
			free(current);
			current = temp;
		}
		*head = NULL;
	}

	return (count);
}
