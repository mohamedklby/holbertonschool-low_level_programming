#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Affiche l'échiquier passé en argument.
 * @a: Pointeur vers un tableau 2D de 8x8 représentant l'échiquier.
 *
 * Return: Nothing.
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
