#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head to the linked list
 * Return: head node's data or 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		 n = temp->n;
		free(temp);
		temp = NULL;

	}
	return (n);
}
