#include "lists.h"
/**
 * list_len - returns the number of elements in  alinked list
 * @h: pointer to the head of the list
 * Return: number of elements in the string
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
