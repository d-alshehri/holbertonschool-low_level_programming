#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of a square matrix.
 * @size: The size of the square matrix.
 * Description: This function calculates and prints the sum of the two diagonals
 * of a square matrix, where the first diagonal is from top-left to bottom-right,
 * and the second diagonal is from top-right to bottom-left.
 */
void print_diagsums(int *a, int size)
{
int primary_sum = 0, secondary_sum = 0;
int i;

for (i = 0; i < size; i++)
{
primary_sum += a[i * size + i];
secondary_sum += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", primary_sum, secondary_sum);
}
