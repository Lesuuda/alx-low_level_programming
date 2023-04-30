#include "lists.h"
/**
 * print_listint - prints all the elements of listint_t
 * @h: pointer to new struct
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
