#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of list_t
 * @head: pointer to the pointer of the list
 * @str: pointer to the string
 * Return: address of the new element,
 * NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}


