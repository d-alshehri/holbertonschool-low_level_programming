#include <stdio.h>
#include <stdlib.h>

/**
 * _pow_recursion - Computes the power of a number using recursion.
 * @x: The base number.
 * @y: The exponent (must be non-negative).
 *
 * Return: The result of x raised to the power of y.
 *         Returns -1 if y is negative.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{return -1; }
if (y == 0)
{return 1; }
{return x * _pow_recursion(x, y - 1); }
}
