#include "main.h"

/**
  * _strncat - Concatenates two strings up to n bytes from src
  * @dest: The destination string
  * @src: The source string
  * @n: The number of bytes to concatenate from src
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
