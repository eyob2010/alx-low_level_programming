#include "main.h"
#include "string.h"
/**
 *  *  puts_half - a function that prints half of a string
 *   *    *  @str : Accept the string value
 *     *     *    *    *    *
 *      *      Return: retunes void
 */
void puts_half(char *str)
{
	int i, j, n;

	j = strlen(str);
	if ((j % 2) == 0)
	{
		n = (j / 2);
		for (i = n; i <= (j - 1); i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		j = (j - 1);
		n = (j / 2);
		for (i = n; i <= (j - 1); i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
