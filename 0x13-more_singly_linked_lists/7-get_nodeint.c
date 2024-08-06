#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - Retrieves the node at a specific index in a linked list
  * @head: Pointer to the head of the linked list
  * @index: The index of the node to retrieve
  *
  * Return: Pointer to the node at the specified index, or NULL if the index is out of range
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
