#include <stdio.h>
0;10;1c#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list numbers;

if (n == 0)
{
printf("\n");
return;
}

va_start(numbers, n);

for (i = 0; i < n ; i++){
printf("%d ", va_arg(numbers, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
