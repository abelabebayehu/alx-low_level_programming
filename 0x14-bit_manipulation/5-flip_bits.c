#include <stdlib.h>
#include "main.h"

/**
	* flip_bits - Counts the number of bits that differ between two numbers
	* @n: The first number
	* @m: The second number
	*
	* Return: The number of bits that need to be flipped to convert n to m
	*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int count = 0;

	while (mask)
	{
	if (mask & 1)
	count++;

	mask >>= 1;
	}

	return (count);
}
