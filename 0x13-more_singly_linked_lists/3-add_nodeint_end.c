#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to head
 * @n: integer
 * Return: address of new_node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp = *head;

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
