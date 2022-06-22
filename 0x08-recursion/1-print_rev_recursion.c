#include"main.h"
/**
 *  * _print_rev_recursion - a function that prints a string in reverse.
 *   * @s: The parameter that accepts the string
 *     * Return: On success returns the reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
