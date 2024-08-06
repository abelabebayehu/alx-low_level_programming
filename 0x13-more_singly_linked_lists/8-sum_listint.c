#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - Calculates sum of elements the list
  * @head: Pointer to the head of the linked list
  *
  * Return: Sum all elements in the linked list
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	while (head != NULL)
	{
		amount += head->n;
		head = head->next;
	}

	return (amount);
}
