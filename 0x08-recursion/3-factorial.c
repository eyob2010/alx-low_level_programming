#include"main.h"
/**
 *  *  * factorial - a function that returns a factorial of any number
 *   *   * @n: accepts the number
 *    *    *
 *     *     * Return: On success it returnes thefactorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
