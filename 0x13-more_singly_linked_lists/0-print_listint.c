#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the items in a SLL
 * @h: pointer to the head
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
