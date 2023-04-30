#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;



	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;

	}
	return (count);

}
