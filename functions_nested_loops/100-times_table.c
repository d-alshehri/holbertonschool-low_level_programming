#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number defining the times table (0 to 15).
 */
void print_times_table(int n)
{
int row, col, prod;
if (n < 0 || n > 15)
return;
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
prod = row * col;
if (col != 0)
{
_putchar(',');
_putchar(' ');
if (prod < 100)
_putchar(' ');
if (prod < 10)
_putchar(' ');
}
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10) % 10) + '0');
}
else if (prod >= 10)
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
