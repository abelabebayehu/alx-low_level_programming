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
    char *ptr;

    for (ptr = s; *ptr != '\0'; ptr++) {
        if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z')) {
            if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm')) {
                *ptr = *ptr + 13;
            } else {
                *ptr = *ptr - 13;
            }
        }
    }

    return s;
}
