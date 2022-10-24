#include "lists.h"

/**
 * free_listint2 - Function to free a SLL and set head to NULL
 * @head: double pointer to the head of the SLL
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *var_temp;
	listint_t *current_node;

	if (head != NULL)
	{
		current_node = *head;

		while ((var_temp = current_node) != NULL)
		{
			current_node = current_node->next;
			free(var_temp);
		}

		*head = NULL;
	}
}
