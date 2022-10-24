#include "lists.h"

/**
 * add_nodeint - add a new node at the head of a SLL
 * @head: pointer to the head
 * @n: number of elements in the SLL
 *
 * Return: NULL or address to hew head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node_to_add;

	new_node_to_add = malloc(sizeof(listint_t));

	if (new_node_to_add == NULL)
		return (NULL);

	new_node_to_add->n = n;
	new_node_to_add->next = *head;
	*head = new_node_to_add;

	return (*head);
}
