#include "lists.h"
#include <stdio.h>

/**
 * free_listp - Function to free a SLL
 * @head: double pointer to head
 *
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *var_temp;
	listp_t *current_node;

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

/**
 * print_listint_safe - prints a SLL
 * @head: double pointer to the head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	listp_t *hptr, *new_node, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = hptr;
		hptr = new_node;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (node_count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;
	}

	free_listp(&hptr);
	return (node_count);
}
