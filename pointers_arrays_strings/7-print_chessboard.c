#include "main.h"

/**
*print_chessboard - function that prints the chessboard
*@a: board
*
*Return: void
*/

void print_chessboard(char (*a)[8])
{
	int ligne, colonne;

	for (ligne = 0; ligne < 8; ligne++)
	{
		for (colonne = 0; colonne < 8; colonne++)
		{
			_putchar(a[ligne][colonne]);
		}
		_putchar('\n');
	}
}
