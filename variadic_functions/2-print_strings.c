#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list numbers;

if (n == 0)
{
printf("nil");
return;
}

va_start(numbers, n);

for (i = 0; i < n; i++) {
printf("%d", va_arg(numbers, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
