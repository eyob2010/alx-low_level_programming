#include "main.h"
/**
 *  *  *  *  * print_line - a function
 *  that draws a straight line in the terminal
 *  @n: accepts the number of times _ drawn
 *    *     *     *     * Return: the result
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
