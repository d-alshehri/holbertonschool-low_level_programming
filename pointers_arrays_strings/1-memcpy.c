#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: The number of bytes to copy from src to dest
 * Return: A pointer to the destination memory area (dest)
 * Description: This function copies n bytes from memory area src to
 * memory area dest. It handles raw memory copying, not null-terminated
 * strings. The function copies data byte by byte and returns a pointer
 * to the destination memory area after the copy is complete.
 */

char *_memcpy(char *dest, char *src, unsigned int n) {
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
{return dest; }
}
