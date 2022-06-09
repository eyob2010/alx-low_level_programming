#include "main.h"
#include "_putchar.h"
/**
 *  *  *  *  *  * print_numbers - a function that prints
 *  from 0 - 9 followed by new line
 *      *      *     *     * Return: the result
 */
void print_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
