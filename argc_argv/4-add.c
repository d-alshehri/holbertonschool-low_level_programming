#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string is a number, 0 otherwise.
 */

int is_number(char *str)
{
int i = 0;

if (str[i] == '\0')
{return (0); }

while (str[i])
{
if (!isdigit(str[i]))
{return (0); }
i++;
}
{return (1); }
}

/**
 * main - Adds positive numbers from command-line arguments.
 * @argc: Argument count.
 * @argv: Argument vector (array of strings).
 *
 * Return: 0 on success, 1 if any argument is not a number.
 */

int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
{
printf("0\n");
{return (0); }
}
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
{return (1); }
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
{return (0); }
}
