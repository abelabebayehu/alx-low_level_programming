#include "main.h"
#include <stdio.h>

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */

void rev_string(char *s)
{
    int i = 0, j = 0;
    char temp;

    while (s[j] != '\0')
    {
        j++;
    }
    j--;

    // Swap the characters
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
