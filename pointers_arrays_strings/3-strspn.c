#include <stdio.h>
#include <stdlib.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be checked.
 * @accept: the string containing the allowed characters.
 *
 * Return: the number of bytes in the initial segment of `s`
 *         which consist only of bytes from `accept`.
 */

unsigned int _strspn(char *s, char *accept){
unsigned int count = 0;
    
while (s[count] != '\0') {
int found = 0;   
for (int i = 0; accept[i] != '\0'; i++){
if (s[count] == accept[i]){
found = 1;
break;
}
}
        
if (found == 0)
{break; }
else if (found == 1) {count++;}
}
{return count; }
}
