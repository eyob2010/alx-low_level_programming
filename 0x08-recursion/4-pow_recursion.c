#include"main.h"
/**
 *  * _pow_recursion - a function that returns
 *  the value of x raised to the power of y
 *   * @x: Accepts the value of x
 *   * @y: Accepts the value of y
 *     * Return: On success it return x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y >= 1)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (0);
}
