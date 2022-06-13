#include "main.h"
#include "string.h"
/**
 *  puts2 - a function that prints every other character of a string
 *   *    *  @str : Accept the string value
 *     *     *    *    *    *
 *      *      *     Return: retunes void
 */
void puts2(char *str)
{
	int i, j;

	j = strlen(str);
	j = (j - 1);
	for (i = 0; i <= j; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
