#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
int g, s;

for (g = 0; g < 8; g++)
{
for (s = 0; s < 8; s++)
{
_putchar(a[g][s]);
}
_putchar('\n');
}
}
