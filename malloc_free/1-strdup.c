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
if (str == NULL)
{return NULL; }
dup_str = malloc(strlen(str) + 1);
if (dup_str == NULL)
{return NULL; }
strcpy(dup_str, str);
{return dup_str; }
}
