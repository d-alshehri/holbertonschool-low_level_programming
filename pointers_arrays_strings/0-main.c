#include "main.h"
#include <stdio.h>

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("Before strcat: %s\n", s1);
    ptr = _strcat(s1, s2);
    printf("After strcat: %s", s1);
    printf("Return value: %s", ptr);

    return (0);
}
