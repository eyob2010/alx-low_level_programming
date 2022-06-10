#include "main.h"
/**
 *  *  * print_square - check is a function
 *  that prints a square, followed by a new line
 *   *   * @size : accepts the size of the square
 *    *    * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
