#include "lists.h"

/**
 * add_nodeint_end - function to place a node at the end of SLL
 * @head: double pointer to the head
 * @n: number of elements in the SLL
 *
 * Return: NULL of address of head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *var_temp;

	(void)var_temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	var_temp = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (var_temp->next != NULL)
		{
			var_temp = var_temp->next;
		}
		var_temp->next = new_node;
	}

	return (*head);
}
