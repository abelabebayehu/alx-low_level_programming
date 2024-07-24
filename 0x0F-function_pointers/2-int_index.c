#include "function_pointers.h"

/**
  * int_index - Searches for an integer in an array
  * @array: The array of integers
  * @size: The number of elements in the array
  * @cmp: A pointer to the function used to compare values
  *
  * Return: The index of the first element for which the cmp function
  *         does not return 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
