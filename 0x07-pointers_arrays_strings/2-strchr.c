#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: source string
  * @c: character to find
  *
  * Return: pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
  */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
