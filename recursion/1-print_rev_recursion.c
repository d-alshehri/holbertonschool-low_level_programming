#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 *
 * Description: This function moves forward through the string recursively
 * until it reaches the null terminator, then prints characters as it returns,
 * effectively reversing the string.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{return; }
_print_rev_recursion(s + 1);
 write(1, s, 1);
}
