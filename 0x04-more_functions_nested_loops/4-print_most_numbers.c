#include "main.h"
/**
 *  *  *  *  *  *  * print_most_numbers - a function that prints
 *   *  from 0 - 9 excep 2 and 4 followed by new line
 *    *      *      *     *     * Return: the result
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
