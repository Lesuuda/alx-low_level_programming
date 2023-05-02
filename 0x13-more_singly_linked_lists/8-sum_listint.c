#include "lists.h"
/**
 * sum_listint - gets the sum of data of the linked list
 * @head: head of the linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head != 0)
	{
		
		while (temp)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
		return (sum);
	}
	else
		return (0);
}
