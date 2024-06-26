#include "main.h"

/**
 * islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 for lowercase character or 0 for anything else
 **/

int _islower(int c) /** a function that checks if a character is lowercase character*/
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
