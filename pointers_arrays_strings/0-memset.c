#include <stdio.h>
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);
int main()
{
char array[10];
char b = 0x01;
unsigned int n = 5;    
_memset(array, b, n);
return 0;
}

char *_memset(char *s, char b, unsigned int n){
int i;
for (i=0; i<n ; i++) {
*(s + i) = b;
}
{return s; }
}
