#include <stdio.h>

/**
 * main - Prints all arguments received by the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
{return (0); }
}

int main(int argc, char *argv[])
{
int i;
for (i = 0; i <= argc; i++){
    printf("%s", *(argv + i));
}
{return (0); }
}
