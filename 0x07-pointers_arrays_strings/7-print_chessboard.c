#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard represented by 2D array `a`.
 * @a: Pointer to the 2D array representing the chessboard.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}

