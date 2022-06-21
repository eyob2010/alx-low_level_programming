#include"main.h"
/**
 *  * print_chessboard -  a function that prints the chessboard.
 *   * @a: Accepts the two dimentional array
 *     * Return: on return prints the chees board.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
