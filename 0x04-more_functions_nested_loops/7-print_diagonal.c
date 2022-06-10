#include "main.h"
/**
 *  *  *  *  *  print_diagonal - a function
 *   *  that draws a diagonal line line in the terminal
 *    *  @n: accepts the number of times _ drawn
 *     *    *     *     *     * Return: the result
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		if (i > 1)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
	}
	else
	{
		_putchar('\n');
	}
}
