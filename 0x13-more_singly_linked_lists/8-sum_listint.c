#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a SLL
 * @head: pointer to the head
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int total;

	total = 0;
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
