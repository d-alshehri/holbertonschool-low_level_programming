#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string by allocating new memory
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly duplicated string, or NULL if
 *         the string is NULL or memory allocation fails.
 */

char *_strdup(char *str)
{
char *dup_str;
int length = 0;
int i;
if (str == NULL)
{return NULL; }
while (str[length] != '\0')
length++;
dup_str = malloc(strlen(str) + 1);
if (dup_str == NULL)
{return NULL; }
for (i = 0; i < length; i++)
dup_str[i] = str[i];
dup_str[length] = '\0';
{return dup_str; }
}
