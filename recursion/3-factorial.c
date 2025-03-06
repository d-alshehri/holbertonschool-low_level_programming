#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - Computes the factorial of a given number.
 * @n: The number for which the factorial is computed.
 *
 * Return: The factorial of n. If n is lower than 0, returns -1 (error).
 */

int factorial(int n)
{
if (n == 0)
{return 1; }
else if (n < 0)
{return -1; }
{return n * factorial(n - 1); }
}
