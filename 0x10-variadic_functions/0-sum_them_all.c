#include "variadic_functions.h"
#include "stdarg.h"

/**
 *  * sum_them_all - a function that returns the sum of all its parameters.
 *  * @n: accepts the number of arguments
 *   *
 *    * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;

	int i, j, sum;

	j = n;

	sum = 0;

	va_start(arguments, n);

	if (j == 0)
	{
		return (0);
	}
	else
	{
	for (i = 0; i < j; i++)
	{
		sum = sum + va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
	}
	va_end(arguments);
	return (0);
}
