#include "main.h"

/**
  *_memset - Fill memory with a constant byte
  *@s: memory area to occupy
  *@b: constant byte to occupy
  *@n: bytes of memory area to occupy

  *Return: the memory area filled
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
