#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to pointer to the head
 * @n: interger
 * Return: adreess of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
	{
		new_node->next = *head;
	}
	*head = new_node;
	return (new_node);
}
