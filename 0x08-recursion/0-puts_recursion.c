#include"main.h"
#include"string.h"
/**
 *  * _puts_recursion -a function that prints a string, followed by a new line.
 *   * @s: A parameter that accepts the string to be printed
 *   character by character except the null value.
 *    *
 *     * Return: On success prints all the string except the null value
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

}
