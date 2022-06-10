#include "main.h"
/**
 *  *  *  * print_triangle -  a function that
 *  prints a triangle, followed by a new line
 *    *   *   * @size : accepts the size of the triangle
 *     *    *    * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = i; k < size; k++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
