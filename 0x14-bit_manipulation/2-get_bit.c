#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: The number to find the bit in
  * @index: The index of the bit to find (starting from 0)
  *
  * Return: The value of the bit at the specified index (0 or 1),
  * or -1 if an error occurred (e.g., index out of range)
  */

int get_bit(unsigned long int n, unsigned int index)
{
    unsigned int comp_i = 0;

    while (n)
    {
        if (comp_i == index)
        {
            if (n % 2)
                return (1);
            else
                return (0);
        }

        n = n / 2;
        comp_i++;
    }

    if (index > comp_i && index < 63)
        return (0);

    return (-1);
}
