#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of node to be delted
 * Return: 1 0r -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;

	temp = *head;
	current = temp;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 0)
		{
			temp = current;
			current = current->next;
			index--;
		}
		temp->next = current->next;
		free(current);
		current = NULL;

	}
	return (1);
}
