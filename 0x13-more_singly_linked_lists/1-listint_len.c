#include "lists.h"

/**
 * listint_len - returns the number of nodes in
 * a SLL
 * @h: pointer to the head
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
