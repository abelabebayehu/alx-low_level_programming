#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - Removes the head node of a linked list and returns its value
  * @head: Double pointer to the head of the linked list
  *
  * Return: The value of the removed node, or 0 if the list was empty
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	if (*head == NULL)
		return (0);

	new_head = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new_head;

	return (n);
}
