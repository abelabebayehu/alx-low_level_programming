#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - Deletes a node at a specific index in a linked list
  * @head: Double pointer to the head of the linked list
  * @index: The index of the node to delete
  *
  * Return: 1 if the node was deleted successfully, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = *head, *to_delete;

	if (head == NULL || *head == NULL)
		return (-1);

	/** Special case: deleting the head node **/
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	/** Traverse the list to find the node before the one to delete **/
	while (temp != NULL && count < index - 1)
	{
		temp = temp->next;
		count++;
	}

	/** If temp is NULL or temp->next is NULL, index is out of range **/
	if (temp == NULL || temp->next == NULL)
		return (-1);

	/** Node to be deleted **/
	to_delete = temp->next;
	temp->next = to_delete->next;
	free(to_delete);

	return (1);
}
