#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - Reverses a linked list
  * @head: Double pointer to the head of the linked list
  *
  * Return: Pointer to the new head of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;  // Update head to new first node
	return (*head);
}
