#include "main.h"
#include "string.h"
/**
 *  *  *  *  _puts - a function that prints a string,
 *  followed by a new line
 *   *    *  @str : Accept the string
 *     *     *    *    *    *
 *      *  Return: retunes voi
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
