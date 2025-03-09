#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);

#endif /* MAIN_H */
