#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	listint_t *temp = *head;

	while (temp != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
	*head =NULL;
}
