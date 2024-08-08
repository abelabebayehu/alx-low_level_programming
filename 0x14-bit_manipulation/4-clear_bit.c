#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
	* clear_bit - Sets the value of a bit to 0 at a given index
	* @n: Pointer to the number to modify
	* @index: The index of the bit to clear (starting from 0)
	*
	* Return: 1 if it worked, or -1 if an error occurred
	*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Ensure the index is within the range of the number's bits */
	
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	/* Clear the bit at the given index */
	*n &= ~(1UL << index);

	return (1);
}
