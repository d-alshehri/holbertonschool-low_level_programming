#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which square root is to be calculated
 *
 * Return: The square root if it exists, otherwise -1
 */

int _sqrt_recursion(int n)
{
{return _sqrt_helper(n, 0); }
}

/**
 * _sqrt_helper - Helper function to find the square root recursively
 * @n: The number for which square root is being calculated
 * @guess: The current guess for the square root
 *
 * Return: The square root if it exists, otherwise -1
 */

int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
{return guess; }
if (guess * guess > n)
{return -1; }
{return _sqrt_helper(n, guess + 1); }
}
