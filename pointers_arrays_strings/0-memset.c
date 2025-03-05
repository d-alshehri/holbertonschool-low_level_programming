#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - Fills memory with a constant byte.
 * This function takes a pointer to a memory area and fills the first
 * `n` bytes of that memory area with the constant byte `b`.
 * @s: A pointer to the memory area to fill.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill in the memory area.
 * Return: A pointer to the memory area `s`.
 */

char *_memset(char *s, char b, unsigned int n)
{unsigned int i;
for (i = 0; i < n ; i++)
*(s + i) = b;
{return s; }
}
