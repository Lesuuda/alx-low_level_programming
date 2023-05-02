#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node a given position
 * @head: pointer to head of list
 * @idx: index
 * @n: data
 * Return: address of new-node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *temp = *head;

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (i > idx)
		return (NULL);


	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	new_node->next = temp->next;
	new_node = temp->next;

	return (new_node);
}
