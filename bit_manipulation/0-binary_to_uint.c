#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if b is NULL or contains invalid chars.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;

if (!b)
{return (0); }

while (*b)
{
if (*b != '0' && *b != '1')
{return (0); }

num = (num << 1) | (*b - '0');
b++;
}

{return (num); }
}
