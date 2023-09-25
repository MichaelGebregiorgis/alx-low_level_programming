#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: Data type
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int column;
	int row;

	for (column = 0; column < 8; column++)
	{
		for (row = 0; row < 8; row++)
		{
			_putchar(a[column][row]);
		}
		_putchar('\n');
	}
}
