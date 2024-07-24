#include "function_pointers.h"

/**
  * array_iterator - Executes a function given as a parameter on each element of an array.
  * @array: The array of integers
  * @size: The size of the array.
  * @action: A pointer to the function to be used.
  *
  * Return:  Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
