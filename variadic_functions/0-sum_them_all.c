#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of arguments
 *
 * Return: Sum of all parameters, or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...){
int i = 0;
int total = 0;
   
va_list elements;
if ( n==0 )
{return 0; }
   
va_start(elements, n);
   
for (i = 0; i < (int)n ; i++){
total += va_arg(elements, int);
}
va_end(elements);
{return total; }
}
