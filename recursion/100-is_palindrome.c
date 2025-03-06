#include "main.h"

/**
* is_palindrome - Checks if a string is a palindrome
* @s: The string to check
*
* Return: 1 if the string is a palindrome, 0 if not
*/
int is_palindrome(char *s)
{
int len = _strlen(s);
{return (check_palindrome(s, 0, len - 1)); }
}

/**
* _strlen - Calculates the length of a string
* @s: The string whose length is to be calculated
*
* Return: The length of the string
*/
int _strlen(char *s)
{
if (*s == '\0')
{return (0); }
{return (1 + _strlen(s + 1)); }
}

/**
* check_palindrome - Helper function to check if the string is a palindrome
* @s: The string to check
* @start: The starting index of the string
* @end: The ending index of the string
*
* Return: 1 if the string is a palindrome, 0 if not
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
{return (1); }

if (s[start] != s[end])
{return (0); }

{return (check_palindrome(s, start + 1, end - 1)); }
}
