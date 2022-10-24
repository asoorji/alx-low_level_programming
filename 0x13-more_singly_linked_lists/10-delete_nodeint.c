#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete node at an index
 * @head: double pointer to the head
 * @index: index of node to remove
 *
 * Return: -1 if fail or 1 is success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *previous_node;
	listint_t *next;

	previous_node = *head;

	if (index != 0)
	{
		for (count = 0; count < index - 1 && previous_node != NULL; count++)
		{
			previous_node = previous_node->next;
		}
	}

	if (previous_node == NULL || (previous_node->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous_node->next;

	if (index != 0)
	{
		previous_node->next = next->next;
		free(next);
	}
	else
	{
		free(previous_node);
		*head = next;
	}

	return (1);
}
