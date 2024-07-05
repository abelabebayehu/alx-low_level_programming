#include "main.h"
#include <stdio.h>

/**
  * rot13 - converts strings by the rot13 encoding
  * @s: the string that is to be converted
  *
  * Return: Pointer to the converted string @s
  */

char *rot13(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++) 
    {
        if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
        {
            s[i] = s[i] + 13;
        }
        else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
        {
            s[i] = s[i] - 13;
        }
    }
    return s;
}
