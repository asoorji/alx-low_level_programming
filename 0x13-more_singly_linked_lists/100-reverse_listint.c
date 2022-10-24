#include "lists.h"

/**
 * reverse_listint - reverses a SLL
 * @head: double pointer to the head
 *
 * Return: pointer to the head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next_;

	prev = NULL;
	next_ = NULL;

	while (*head != NULL)
	{
		next_ = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_;
	}

	*head = prev;
	return (*head);
}
