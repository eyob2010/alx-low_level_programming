#include "main.h"
/**
 *  *  *  *  * print_sign - return 1 and display + if the number greater tha 0
 *   return 0 and display 0 if the number is zero
 *  return -1 and display - if the number is less than zero.
 *   *   *   *   * @n : Accept the number to be evaluated
 *    *    *    *    *
 *     *     *    * Return: On greater than 0  is 1
 *     when equal to zero is 0, other wise -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
