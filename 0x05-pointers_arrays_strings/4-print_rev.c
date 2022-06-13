#include "main.h"
#include "string.h"
#include "stdio.h"
/**
 *  *  *  *  print_rev - a function that prints a string,
 *  in reverse, followed by a new line
 *   *    *  @s : Accept the first value
 *     *     *    *    *    *
 *      *      *     Return: void  on success
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s);
	i = (i - 1);

	while (i >= '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');

}
