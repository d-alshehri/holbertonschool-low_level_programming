#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocated space in memory
 * containing s1 followed by s2, NULL if failure.
 */
char *str_concat(char *s1, char *s2)
{
int i, j, len1 = 0, len2 = 0;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
result = malloc((len1 + len2 + 1) * sizeof(char));
if (result == NULL)
{return NULL; }
for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < len2; j++)
result[i + j] = s2[j];
result[i + j] = '\0';
{return result; }
}
