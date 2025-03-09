#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
int i, j, k, len = 0;
char *result;

if (ac == 0 || av == NULL)
{return (NULL); }

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}

result = malloc(sizeof(char) * (len + 1));
if (result == NULL)
{return (NULL); }

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
result[k] = av[i][j];
result[k] = '\n';
k++;
}

result[k] = '\0';

{return (result); }
}
