#include "lists.h"
/**
 * reverse_listint - pointer to the reverse function
 * @head: pointer to head of linked list
 * Return: pointer to tge first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next_node;

	previous = NULL ;
	next_node = NULL;

	while (next_node != 0)
	{
		next_node = next_node->next;
		previous = (*head)->next;
		previous = (*head);
		(*head) = next_node;
	}
	*head = previous;

	return (*head);
}
