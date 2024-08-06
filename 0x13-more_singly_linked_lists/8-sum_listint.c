#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - Calculates the sum of all the elements in a linked list
  * @head: Pointer to the head of the linked list
  *
  * Return: The sum of all the elements in the linked list
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
