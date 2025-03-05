#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard
 * @a: A pointer to an 8x8 array representing the chessboard
 *
 * This function takes a pointer to an 8x8 2D array representing a chessboard.
 * It prints the chessboard in a grid format where each character represents
 * a chess piece or an empty space. After each row, a newline is printed to
 * maintain the structure of the chessboard.
 */

void print_chessboard(char (*a)[8])
{
for (int i = 0; i < 8; i++)
{
for (int j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
