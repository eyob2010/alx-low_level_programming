#include "main.h"
/**
 *  *  *  *  * print_last_digit - prints the last digit of a number
 *   *   *   *   * @n : Accept the number to be evaluated
 *    *    *    *    *
 *     *     *     *     * Return: the last digit of a number
*/
int print_last_digit(int n)
{
	char j, i;
	i = ((n % 10) * (11));
	j = i;
	return (j + i);
}
