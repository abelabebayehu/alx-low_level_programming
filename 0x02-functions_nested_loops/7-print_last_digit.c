#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: The integer to be processed
 *
 * Convert the digit to its ASCII representation using 48
 *
 * Return: Value of the last digit of number
 *
 */

int print_last_digit(int n)

	{
		int last = n % 10;

		if (last < 0)
		{
		last = -last;
		}
		_putchar(last + 48);
		return last;
	}
