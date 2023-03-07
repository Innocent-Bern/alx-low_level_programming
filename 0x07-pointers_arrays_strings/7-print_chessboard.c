#include "main.h"

/**
* _print_chessboard : Function prints a chess board.
* @a: string input
* Return : void
*/

void print_chessboard(char (*a)[8])
{
    int x, y;

    for (x = 0; x < 8; x++)
    {
        for (y = 0; y < 8; y++)
        {
            _putchar(a[x][y]);
        }
        _putchar('\n');
    }
}
