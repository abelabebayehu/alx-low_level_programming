#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - Inserts a new node at a given position in a linked list
  * @head: Double pointer to the head of the linked list
  * @idx: The index at which to insert the new node
  * @n: The value to add to the new node
  *
  * Return: The address of the new node, or NULL if it failed or index is out of range
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *iter;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	iter = *head;
	while (iter != NULL && count < idx - 1)
	{
		iter = iter->next;
		count++;
	}

	if (iter == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = iter->next;
	iter->next = new_node;

	return (new_node);
}
