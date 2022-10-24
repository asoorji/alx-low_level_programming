#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the nth index
 * @head: pointer to the head of the SLL
 * @index: index of the node
 *
 * Return: NULL or the node at the nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}

	return (head);
}
