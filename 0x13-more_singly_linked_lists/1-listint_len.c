#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h:head of the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
