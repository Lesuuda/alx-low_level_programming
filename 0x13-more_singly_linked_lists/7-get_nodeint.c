#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at a given index
 * @head: head of node
 * @index: index of the node
 * Return: count or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int count = 0;

	temp = head;

	if (temp == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
