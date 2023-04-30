#include "lists.h"
/**
 * listint_len - printts the number of elements in a linked list
 * @h: pointer to listint_t
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
