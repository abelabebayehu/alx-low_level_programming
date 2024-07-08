#include "main.h"

/**
  * _memcpy - copies n bytes
  * @dest: destination memory area
  * @src: source memory area
  * @n: number of bytes to copy
  *
  * Return: copied memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
