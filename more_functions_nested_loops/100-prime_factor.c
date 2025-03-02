#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * largest_prime_factor - Finds and prints the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 */
void largest_prime_factor(long n)
{
long i;

while (n % 2 == 0)
{
printf("%d ", 2);
n = n / 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
printf("%d ", i);
n = n / i;
}
}
if (n > 2)
printf("%d\n", n);
}

int main(void)
{
largest_prime_factor(612852475143);
{return (0); }
}
