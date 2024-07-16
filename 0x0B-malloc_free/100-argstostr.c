#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - convert the params passed to the program to string
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: A pointer to the new string, or NULL if ac == 0 or av == NULL.
  */

char *argstostr(int ac, char **av)
{
int total_length = 0, i = 0, j = 0, k = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)

total_length++;
total_length++;
}

str = malloc((total_length + 1) * sizeof(char));
if (str == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, k++)
{
str[k] = av[i][j];
}
str[k] = '\n';
k++;
}
str[k] = '\0';

return (str);
}
