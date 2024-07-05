#include "main.h"
#include <stdio.h>

/**
  * rot13 - converts strings by the rot13 code
  * @s: the string that is to be converted
  *
  * Return: s
  */

char *rot13(char *s)
{
int i;
char s;
for (i = 0; s[i] != '\0'; i++) 
{
if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
{
s[i] = s[i] + 13;
}
else
{
s[i] = s[i] - 13;
}
}
return s;
}
