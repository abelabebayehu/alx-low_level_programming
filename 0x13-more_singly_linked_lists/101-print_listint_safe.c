#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_listint_safe - Prints a listint_t linked list, handling loops
  * @head: Pointer to the head of the linked list
  *
  * Return: The number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    size_t count = 0;
    void *addresses[1024];  // Array to store addresses for loop detection
    size_t i = 0;

    while (current != NULL)
    {
        // Check if the current node has been visited
        for (i = 0; i < count; i++)
        {
            if (addresses[i] == (void *)current)
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                exit(98);
            }
        }

        // Store the address of the current node
        addresses[count] = (void *)current;
        count++;

        // Print the current node
        printf("[%p] %d\n", (void *)current, current->n);

        // Move to the next node
        current = current->next;
    }

    return (count);
}
