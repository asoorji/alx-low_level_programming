#include "lists.h"

/**
 * pop_listint - removes the first node in a SLL
 * @head: double pointer to the head
 *
 * Return: data of the first node
 */
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp;
	listint_t *current_node;

	if (*head == NULL)
		return (0);

	current_node = *head;

	first_node = current_node->n;

	temp = current_node->next;

	free(current_node);

	*head = temp;

	return (first_node);
}
