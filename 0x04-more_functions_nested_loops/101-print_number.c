#include "main.h"
/**
 *  *  *  *  print_number - a function that prints an integer
 *    *    *  @n: accepts the number to be printed
 *    *    *     *     *     * Return: the result
 */
void print_number(int n)
{
	int i;

	while (n > 0)
	{
		i = (n / 10);
		i = (i + '0');
		_putchar(i);
		n = (n / 10);
	}
}
